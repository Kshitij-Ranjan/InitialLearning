<<<<<<< Updated upstream
#include <stdio.h>

int main() {
    int n = 4;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            if (i % 2 == 0) {
                printf("%d", j % 2);
            } else {
                printf("%d", (j + 1) % 2);
            }
        }
        printf("\n");
    }
    return 0;
}
=======
#include <stdio.h>

int main() {
    int n = 4;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            if (i % 2 == 0) {
                printf("%d", j % 2);
            } else {
                printf("%d", (j + 1) % 2);
            }
        }
        printf("\n");
    }
    return 0;
}
>>>>>>> Stashed changes
