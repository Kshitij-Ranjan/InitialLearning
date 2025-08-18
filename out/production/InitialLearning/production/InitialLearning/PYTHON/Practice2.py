import cv2
import mediapipe as mp
import numpy as np 
import random
import pyttsx3
import time

# Initialize
engine = pyttsx3.init()
mp_hands = mp.solutions.hands
mp_drawing = mp.solutions.drawing_utils
hands = mp_hands.Hands()

# Finger tip indices (excluding thumb)
finger_tips = [8, 12, 16, 20]

# Map number of fingers to moves
move_map = {
    0: "Rock",
    2: "Scissors",
    5: "Paper"
}

def get_finger_count(hand_landmarks):
    count = 0
    landmarks = hand_landmarks.landmark

    # Check fingers (excluding thumb)
    for tip in finger_tips:
        if landmarks[tip].y < landmarks[tip - 2].y:
            count += 1

    # Thumb logic (optional)
    if landmarks[4].x < landmarks[3].x:
        count += 1

    return count

def decide_winner(user_move, computer_move):
    if user_move == computer_move:
        return "Draw"
    elif (user_move == "Rock" and computer_move == "Scissors") or \
         (user_move == "Scissors" and computer_move == "Paper") or \
         (user_move == "Paper" and computer_move == "Rock"):
        return "Win"
    else:
        return "Lose"

cap = cv2.VideoCapture(0)

last_play_time = 0
cooldown = 3  # seconds between games

while True:
    ret, frame = cap.read()
    if not ret:
        break

    frame = cv2.flip(frame, 1)
    rgb = cv2.cvtColor(frame, cv2.COLOR_BGR2RGB)
    result = hands.process(rgb)

    user_move = None

    if result.multi_hand_landmarks:
        for hand_landmarks in result.multi_hand_landmarks:
            mp_drawing.draw_landmarks(frame, hand_landmarks, mp_hands.HAND_CONNECTIONS)

            fingers = get_finger_count(hand_landmarks)

            if fingers in move_map:
                user_move = move_map[fingers]

                current_time = time.time()
                if current_time - last_play_time > cooldown:
                    computer_move = random.choice(list(move_map.values()))
                    outcome = decide_winner(user_move, computer_move)

                    text = f"You: {user_move}, Bot: {computer_move} - {outcome}"
                    print(text)

                    if outcome == "Draw":
                        engine.say("Can even win, I am just a computer you dumb fuck")
                        engine.runAndWait()
                    if outcome == "Lose":
                        engine.say("ha ha ha ha ha, you lose you dumb ass motherfucker")
                        engine.runAndWait()
                    if outcome == "Win":
                        engine.say("OK you cheater, I am going to kill you now.")
                        engine.runAndWait()

                    last_play_time = current_time

                    # Display result for a few seconds
                    cv2.putText(frame, text, (50, 400), cv2.FONT_HERSHEY_SIMPLEX, 0.8, (0, 0, 255), 2)

    cv2.imshow("Rock Paper Scissors", frame)
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

cap.release()
cv2.destroyAllWindows()
