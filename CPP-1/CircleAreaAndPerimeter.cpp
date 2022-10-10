#include<iostream>
using namespace std;
float r,a,p;
int main(){
    cout<<"Welcome to Area and Perimeter of Circle finder"<<endl;
    cout<<"Enter the radius of the circle (in cm): ";
    cin>>r;
    a=3.1415926535898*r*r;
    p=2*3.1415926535898*r;
    cout<<"Area of the circle is = "<<a<<endl;
    cout<<"Perimeter of the circle is = "<<p<<endl;
    return 0;
}