#include<iostream>
using namespace std;

int main (){
    int a;
    cout<<"Welcome to Odd Even Finder!\nEnter your number to find if its odd or even\n";
    cin>>a;
    if(a%2==0)
    {
        cout<<"Given number is even";
    }
    else
    {
        cout<<"Given number is odd";
    }
    return 0;
}