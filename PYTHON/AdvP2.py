#EXEPTION HANDLING
try:
   a= int(input("Enter a:"))
   print(a)
except Exception as e:
   print(e)
#The try block is used to check some code for errors.
#The except block is used to handle the error.


#we can also specify the type of exception in the except block.
try:
    a = int(input("Enter a:"))
    b = 1/a
    print(b)
except ValueError:
    print("ValueError")
except ZeroDivisionError:
    print("ZeroDivisionError")
except Exception as e:
    print(e)
except:
    print("Exception")
#The finally block is used to execute the code after try...except block,
# regardless of the result.
finally:
    print("This will run no matter what")
    
print("This will run even if the exception is raised")



#RAISING EXCEPTIONS

a = int(input("Enter a number: "))
b = int(input("Enter second number: "))

if (b == 0):
    raise ZeroDivisionError("Hey our program is not meant to divide numbers by zero")
else:
    print(f"The division a/b is {a/b}")
#The raise keyword is used to raise an exception.
#We can also specify the type of exception to raise.
