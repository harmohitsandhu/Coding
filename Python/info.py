class info:
    def __init__(self,name,age):
        self.name=name
        self.age=age
    def detail(self):
        return("Your name is "+self.name)
name=str(input("Your name is "))
age=int(input("Your age is "))
i=info(name,age)
print(i.detail())
print("Your age is ", age)