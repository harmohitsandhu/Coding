#include<iostream>
using namespace std;
int tv;
float a,b,c;
int main (){
    cout<<"Welcome to Average Calculator"<<endl;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    cout<<"Enter the total number of values: ";
    cin>>tv;
    c=a+b;
    cout<<"The average of these values is = "<<c/tv;
    return 0;
}