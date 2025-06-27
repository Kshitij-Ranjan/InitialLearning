class Employee: # Base class for Programmer class
    company = "ITC"
    name = "KSH"
    def show(self):
        print(f"The name of the Employee is {self.name} and the company is {self.company}")

class Coder(): # Base class for Programmer class
    language = "python"
    def printlanguage(self):
        print(f"Out of all the languages here is your language: {self.language}")

class Programmer(Employee, coder): # programmer() is a derived class for Employee class and Coder class
#here codes from Employee class and Coder class got inherited in Programmer class
    company = "ITC Infotech"
    def showLanguage(self):
        print(f"The name is {self.company} and he is good with {self.language} language")

a = Employee()
b = Programmer()

b.show()
b.printlanguage()
b.showLanguage()
