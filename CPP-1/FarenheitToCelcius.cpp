#include<iostream>
using namespace std;
float f,c,s;
int main(){
    cout<<"Welcome to Farenheit to Celcius converter"<<endl;
    cout<<"Enter the farenheit value ";
    cin>>f;
    s=f-32;
    c=s*5/9;
    cout<<"The value in Celcius is= "<<c;
    return 0;
}