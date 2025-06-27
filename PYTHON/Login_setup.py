username = input("Enter Your username: ")

class Employee:
    name = "Kshitij"
    salary = 1600000
    Employee_number = 12
    language = "Py"
    
number = int(input("Enter your Employee number: "))

Roll = Employee()

if number == Roll.Employee_number and username == Roll.name :
    print(f"Your name is {Roll.name} with {Roll.salary} as your annual income and you are an expert in {Roll.language}")
else:
    print("Wrong Employee number or username.")