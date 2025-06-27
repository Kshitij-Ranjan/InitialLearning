import pyttsx3 as tts

py = tts.init()

rate = py.getProperty("rate")  # Get the current rate
py.setProperty("rate", rate - 50)  # Increase the rate by 50 (adjust as needed)

py.say("Hello dear 1 2 8")

py.runAndWait()

