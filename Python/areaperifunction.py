choice=int(input("Press 1 for Circle\nPress 2 for Rectangle\nPress 3 for square = "))
if(choice==1):
    def circum(l):
        per=2*3.14*l
        print("Circumference is ",per," units")
    def areacircle(l):
        area=3.14*l*l
        print("Area is ",area," sq units")
    l=float(input("Enter the radius of the circle = "))
    choice=int(input("Press 1 for Circumference\nPress 2 for Area = "))
    if(choice==1):
        circum(l)
    elif(choice==2):
        areacircle(l)
    else:
        input("Error! Please choose from the list only")
elif(choice==2):
    def perirec(l,b):
        per=2*(l+b)
        print("Perimeter is ",per," units")
    def arearec(l,b):
        area=l*b
        print("Area is ",area," sq units")
    l=float(input("Enter the length of the rectangle = "))
    b=float(input("Enter the breadth of the rectangle = "))
    choice=int(input("Press 1 for Perimeter\nPress 2 for Area = "))
    if(choice==1):
        perirec(l,b)
    elif(choice==2):
        arearec(l,b)
    else:
        input("Error! Please choose from the list only")
elif(choice==3):
    def perisq(l):
        per=4*l
        print("Perimeter is ",per," units")
    def areasq(l):
        area=l*l
        print("Area is ",area," sq units")
    l=float(input("Enter the side of the square = "))
    choice=int(input("Press 1 for Perimeter\nPress 2 for Area = "))
    if(choice==1):
        perisq(l)
    elif(choice==2):
        areasq(l)
    else:
        input("Error! Please choose from the list only")
else:
    input("Error! Please choose from the list only")
