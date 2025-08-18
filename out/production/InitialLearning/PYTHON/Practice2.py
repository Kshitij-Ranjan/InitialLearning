import tkinter as tk

window = tk.Tk()
window.title("Test Window")
window.geometry("300x200")  # optional size

# Add something inside the window (like a Label)
label = tk.Label(window, text="Hello, Tkinter!", font=("Arial", 18), fg="white", bg="black")
label.pack(pady=60)  # center it with some space

window.configure(bg='black')  # make background match
window.mainloop()
