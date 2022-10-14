#include<iostream>
using namespace std;
int main(){
    int apc, c1, l, b;
    /*apc variable short for "Area Perimeter Calculator" for switch
    c1 variable for if statement
    l operand for length, side and radius
    b operand for breadth*/
    cout<<"Welcome to Area and Perimeter Calculator!\nPress 1 for Rectangle\nPress 2 for Square\nPress 3 for Circle"<<endl;
    cin>>apc;
    switch (apc)
    {
    case 1:
        cout<<"Press 1 for Area\nPress 2 for perimeter"<<endl;
        cin>>c1;
        if(c1==1)
        {
            cout<<"Enter length of the Rectangle = ";
            cin>>l;
            cout<<"Enter breadth of the Rectangle = ";
            cin>>b;
            cout<<"Area of the Rectangle is = "<<l*b<<" sq units";
        }
        else if(c1==2)
        {
            cout<<"Enter length of the Rectangle = ";
            cin>>l;
            cout<<"Enter breadth of the Rectangle = ";
            cin>>b;
            cout<<"Perimeter of the Rectangle is = "<<2*(l+b)<<" units";
        }
        else
        {
            cout<<"Please choose number from the list only";
        }
        break;


    case 2:
        cout<<"Press 1 for Area\nPress 2 for perimeter"<<endl;
        cin>>c1;
        if(c1==1)
        {
            cout<<"Enter side of the Square = ";
            cin>>l;
            cout<<"Area of the Square is = "<<l*l<<" sq units";
        }
        else if(c1==2)
        {
            cout<<"Enter side of the Square = ";
            cin>>l;
            cout<<"Perimeter of the Square is = "<<4*l<<" units";
        }
        else
        {
            cout<<"Please choose number from the list only";
        }
        break;


    case 3:
        cout<<"Press 1 for Area\nPress 2 for Circumference"<<endl;
        cin>>c1;
        if(c1==1)
        {
            cout<<"Enter radius of the Circle = ";
            cin>>l;
            cout<<"Area of the Circle is = "<<3.14159*l*l<<" sq units";
        }
        else if(c1==2)
        {
            cout<<"Enter radius of the Circle = ";
            cin>>l;
            cout<<"Circumference of the Circle is = "<<2*3.14159*l<<" units";
        }
        else
        {
            cout<<"Please choose number from the list only";
        }
        break;
        
    default:
        cout<<"Please choose number from the list only";
        break;
    }
    return 0;
}