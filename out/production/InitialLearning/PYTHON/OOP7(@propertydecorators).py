class Employee:
    a = 1

    @classmethod
    def showthis(cls):
        print(f"This is class attribute {cls.a}")

    @property
    def user(self):
        return f"{self.fuser} {self.luser}"

    @user.setter
    def user(self, value):
        self.fuser = value.split(" ")[0]
        self.luser = value.split(" ")[1]


o = Employee()
o.a = 45

o.user = "KSH RAN"
print(o.fuser, o.luser)
o.showthis()