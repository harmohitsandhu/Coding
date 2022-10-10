#include<iostream>
using namespace std;

int main() {
    int a,b,c,d,peri,area,s;
    cout<<"Press 1 for Rectangle\nPress 2 for Square\n";
    cin>>a;
    if(a==1)
    {
        cout<<"Press 1 for Perimeter\nPress 2 for Area\n ";
        cin>>b;
        if(b==1)
        {
            cout<<"Enter the length of Rectangle (in cm): ";
            cin>>c;
            cout<<"Enter the breadth of Rectangle (in cm): ";
            cin>>d;
            peri=2*(c+d);
            cout<<"Perimeter of the Rectangle (in cm) is "<<peri;
        }
        else if(b==2)
        {
            cout<<"Enter the length of Rectangle (in cm): ";
            cin>>c;
            cout<<"Enter the breadth of Rectangle (in cm): ";
            cin>>d;
            area=c*d;
            cout<<"Area of the Rectangle (in cm) is "<<area;
        }
        else if(b>2)
        {
            cout<<"Error! Please choose options from the list only";
        }
        else if(b<1)
        {
            cout<<"Error! Please choose options from the list only";
        }
    }
    else if(a==2)
    {
        cout<<"Press 1 for Perimeter\nPress 2 for Area\n ";
        cin>>b;
        if(b==1)
        {
            cout<<"Enter the side of Square (in cm): ";
            cin>>s;
            peri=4*s;
            cout<<"Perimeter of the Square (in cm) is "<<peri;
        }
        else if(b==2)
        {
            cout<<"Enter the side of Square (in cm): ";
            cin>>s;
            area=s*s;
            cout<<"Area of the Square (in cm) is "<<area;
        }
        else if(b>2)
        {
            cout<<"Error! Please choose options from the list only";
        }
        else if(b<1)
        {
            cout<<"Error! Please choose options from the list only";
        }
    }
    else if(a>2)
    {
        cout<<"Error! Please choose options from the list only";
    }
    else if(a<1)
    {
        cout<<"Error! Please choose options from the list only";
    }
    return 0;
}