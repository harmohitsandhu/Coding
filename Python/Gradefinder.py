a=int(input("Enter the marks obtained in first Subject = "))
b=int(input("Enter the marks obtained in second Subject = "))
c=int(input("Enter the marks obtained in third Subject = "))
d=int(input("Enter the sum of total marks = "))
e=(a+b+c)*100/d
print(e,"%")
if(e>=90):
    print("A grade")
elif(e>=80 and e<=89):
    print("B grade")
elif(e>=70 and e<=79):
    print("C grade")
elif(e>=60 and e<=69):
    print("D grade")
elif(e>=50 and e<=59):
    print("E grade")
elif(e>50 and e<=0):
    print("Fail")
else:
    print("Error!")