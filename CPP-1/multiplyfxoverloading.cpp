#include<iostream>
using std::cout;
using std::cin;
int fx(float,float);
int main(){
    float n1,n2,mult;
    cout<<"Welcome to function overloading experiment!\nPlease enter the value of first number = ";
    cin>>n1;
    cout<<"Enter the value of second number = ";
    cin>>n2;
    mult=fx(n1,n2);
    cout<<mult;
    return 0;
}
int fx(float x,float y){
    int c;
    c=x*y;
    cout<<"Value is = ";
    return(c);
}