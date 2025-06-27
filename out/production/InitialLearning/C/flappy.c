#include <SDL2/SDL.h>
#include <stdbool.h>

#define WINDOW_WIDTH 800
#define WINDOW_HEIGHT 600
#define GRAVITY 0.5
#define FLAP_STRENGTH -10

typedef struct {
    float x, y;
    float velocity;
} Bird;

typedef struct {
    int x, gap_y;
    bool passed;
} Pipe;

bool detectCollision(Bird bird, Pipe pipe, int pipeWidth, int gapHeight) {
    if ((bird.x >= pipe.x && bird.x <= pipe.x + pipeWidth) &&
        (bird.y <= pipe.gap_y || bird.y >= pipe.gap_y + gapHeight)) {
        return true;
    }
    if (bird.y <= 0 || bird.y >= WINDOW_HEIGHT) {
        return true;
    }
    return false;
}

int main() {
    SDL_Init(SDL_INIT_VIDEO);
    SDL_Window *window = SDL_CreateWindow("Flappy Bird by KSH",
        SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
        WINDOW_WIDTH, WINDOW_HEIGHT, SDL_WINDOW_SHOWN);
    
    SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

    Bird bird = {100, WINDOW_HEIGHT / 2, 0};
    Pipe pipe = {WINDOW_WIDTH, 200, false};
    int score = 0;

    bool running = true;
    SDL_Event event;

    while (running) {
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {
                running = false;
            } else if (event.type == SDL_KEYDOWN && event.key.keysym.sym == SDLK_SPACE) {
                bird.velocity = FLAP_STRENGTH;
            }
        }

        bird.velocity += GRAVITY;
        bird.y += bird.velocity;

        pipe.x -= 5;
        if (pipe.x + 50 < 0) {
            pipe.x = WINDOW_WIDTH;
            pipe.gap_y = rand() % (WINDOW_HEIGHT - 200);
            pipe.passed = false;
        }

        if (detectCollision(bird, pipe, 50, 150)) {
            printf("Game Over! Your score: %d\n", score);
            running = false;
        }

        if (!pipe.passed && bird.x > pipe.x + 50) {
            pipe.passed = true;
            score++;
        }

        SDL_SetRenderDrawColor(renderer, 135, 206, 250, 255);
        SDL_RenderClear(renderer);

        SDL_SetRenderDrawColor(renderer, 255, 255, 0, 255);
        SDL_Rect birdRect = {bird.x, bird.y, 20, 20};
        SDL_RenderFillRect(renderer, &birdRect);

        SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255);
        SDL_Rect pipeRectTop = {pipe.x, 0, 50, pipe.gap_y};
        SDL_Rect pipeRectBottom = {pipe.x, pipe.gap_y + 150, 50, WINDOW_HEIGHT - pipe.gap_y - 150};
        SDL_RenderFillRect(renderer, &pipeRectTop);
        SDL_RenderFillRect(renderer, &pipeRectBottom);

        SDL_RenderPresent(renderer);

        SDL_Delay(16);
    }

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}
