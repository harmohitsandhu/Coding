#include<iostream>
using std::cout;
using std::cin;
using std::endl;
int main(){
    int a,b,sum,multiply,divide,modulo;
    cout<<"Enter two numbers : ";
    cin>>a;
    cout<<"\n";
    cin>>b;
    cout<<"\n";
    sum=a+b;
    multiply=a*b;
    divide=a/b;
    modulo=a%b;
    cout<<"Sum is "<<sum<<endl;
    cout<<"multiplication is "<<multiply<<endl;
    cout<<"Division is "<<divide<<endl;
    cout<<"Modulo is "<<modulo<<endl;
}