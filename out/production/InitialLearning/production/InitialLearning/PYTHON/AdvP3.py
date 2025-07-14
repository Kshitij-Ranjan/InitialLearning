#Try else
def try_else():
    try:
        a = int(input("Hey, Enter a number: "))
        print(a)
        return

    except Exception as e:
        print(e)
        return

    #print("This will run no matter what")
    #if we write the above line, it will not print because the return statement is already there.
    #so to run a line after the return statement, we can use the finally block.
    finally:
        print("This will run no matter what")
#The else block is used to execute the code if no exceptions are raised.
#The finally block is used to execute the code after try...except block,
# regardless of the result.

if __name__ == "__main__":
    #if this code is directly executed by running this file its present in
    print("We are directly running this code")

try_else()

print(__name__)
#This will tell us the name of file. if we are running this file
#it will just give us __main__, but if we import this file in another file
#and run that file, print(__name__) will give name of this file(i.e which was imported)
#e.g - run AdvP4(__main__).py
