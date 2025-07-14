class Employee:
    language = "Py"  # This is a class attribute
    salary = 1200000

    def getInfo(self): # here we can put any name instead of self
        print(f"The language is {self.language}. The salary is {self.salary}")

    def __init__(self, name, salary, language):
        self.name = name
        self.salary = salary
        self.language = language
        print("Here __init__ is a dunder method.")

# Dunder methods are those functions which automatically gets called.

    @staticmethod #by using this we avoid using self as we do not need any property of the object.
    def greet():
        print("Good morning")

harry = Employee("Kshitij", 1600000, "Javascript")
print(harry.name, harry.language, harry.salary)
