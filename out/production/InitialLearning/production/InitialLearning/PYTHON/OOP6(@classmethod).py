class Employee:
    a = 1
    def c1(self):
        print(f"This is instance attribute {self.a}")
    @classmethod #By this, class attribute will not change for code lying in it
    def c2(cls):
        print(f"This is class attribute {cls.a}")

o = Employee()
o.a = 45

o.c1()
o.c2()