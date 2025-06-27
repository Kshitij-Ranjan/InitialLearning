<<<<<<< Updated upstream
#if else practice

# w = int(input("Please enter a number: "))
# x = int(input("Please enter a number: "))
# y = int(input("Please enter a number: "))
# z = int(input("Please enter a number: "))
# if w>x and w>y and w>z:
#     print(w,"is the greatest")
# elif x>y and x>z:
#     print(x,"is the greatest")
# elif y>z:
#     print(x,"is the greatest")
# else:
#     print(z,"is the greatest")

m1 = int(input("Enter marks of subject 1 out of 100: "))
m2 = int(input("Enter marks of subject 2 out of 100: "))
m3 = int(input("Enter marks of subject 3 out of 100: "))

if m1 < 33 :
    print("You failed!!!(not 33% in subject 1")
elif m2 < 33 :
    print("You failed!!!(not 33% in subject 2")
elif m3 < 33:
    print("You failed!!!(not 33% in subject 3")
elif (m1+m2+m3)/3 < 40:
    print((m1+m2+m3)/3)
    print("You failed!!!(not 40%)")
else:
    print((m1 + m2 + m3) / 3)
=======
#if else practice

# w = int(input("Please enter a number: "))
# x = int(input("Please enter a number: "))
# y = int(input("Please enter a number: "))
# z = int(input("Please enter a number: "))
# if w>x and w>y and w>z:
#     print(w,"is the greatest")
# elif x>y and x>z:
#     print(x,"is the greatest")
# elif y>z:
#     print(x,"is the greatest")
# else:
#     print(z,"is the greatest")

m1 = int(input("Enter marks of subject 1 out of 100: "))
m2 = int(input("Enter marks of subject 2 out of 100: "))
m3 = int(input("Enter marks of subject 3 out of 100: "))

if m1 < 33 :
    print("You failed!!!(not 33% in subject 1")
elif m2 < 33 :
    print("You failed!!!(not 33% in subject 2")
elif m3 < 33:
    print("You failed!!!(not 33% in subject 3")
elif (m1+m2+m3)/3 < 40:
    print((m1+m2+m3)/3)
    print("You failed!!!(not 40%)")
else:
    print((m1 + m2 + m3) / 3)
>>>>>>> Stashed changes
    print("You passed.")