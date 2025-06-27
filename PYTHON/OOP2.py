class Employee:
    language = "Py"  # This is a class attribute
    salary = 1200000

    def getInfo(self): # here we can put any name instead of self
        print(f"The language is {self.language}. The salary is {self.salary}")

    @staticmethod #by using this we avoid using self as we do not need any property of the object.
    def greet():
        print("Good morning")

harry = Employee()
harry.language = "JavaScript"  # This is an instance attribute
harry.getInfo()
# can also be written as
# Employee.getInfo(harry)
