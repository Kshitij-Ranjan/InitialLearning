<<<<<<< Updated upstream
#directory:
marks = {
    "Prateek" : 100,
    "Saurabh" : 98,
    "Swayam" : 96,
    "Kshitij" : 91,
}
print(marks.items())
print(marks.keys())
print(marks.values())
marks.update({"kshitij": 92})
print(marks)
print(marks["Swayam"]) #if we replace Swayam with Swayam2 we'll get error in this.
=======
#directory:
marks = {
    "Prateek" : 100,
    "Saurabh" : 98,
    "Swayam" : 96,
    "Kshitij" : 91,
}
print(marks.items())
print(marks.keys())
print(marks.values())
marks.update({"kshitij": 92})
print(marks)
print(marks["Swayam"]) #if we replace Swayam with Swayam2 we'll get error in this.
>>>>>>> Stashed changes
print(marks.get("Swayam")) #if we replace Swayam with Swayam2 we'll get 'none' as an answer as there exist no name as Swayam2 in the 'marks' list.