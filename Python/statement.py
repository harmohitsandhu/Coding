x=int(input("Enter the value of x = "))
y=int(input("Enter the value of y = "))
z=int(input("Enter the value of z = "))
if(x>y and x>z):
    print("X is greater")
elif(y>x and y>z):
    print("Y is greater")
elif(z>x and z>y):
    print("Z is greater")
else:
    print("Error!")