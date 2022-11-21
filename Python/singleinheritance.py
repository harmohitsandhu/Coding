class student:
    def __init__(self,name,age):
        self.name=name
        self.age=age
    def output(self):
        return(self.name,self.age)
class marks1(student):
    def __init__(self,name,age,marks):
        super().__init__(name,age)
        self.marks=marks
    def minfo(self):
        return(self.output(),"Your marks are ",self.marks)
name=str(input("Your name is "))
age=int(input("Your age is "))
marks=float(input("Your marks in percentage are "))
m=marks1(name,age,marks)
print(m.minfo())