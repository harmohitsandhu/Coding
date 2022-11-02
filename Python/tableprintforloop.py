print("Welcome to Table maker!")
a=float(input("Enter a number to display its mathematical table = "))
b=int(input("Enter the limit to display its mathematical table = "))
c=float()
for i in range (0,b+1):
    print(a,"x",i,"=",i*a,"\n")