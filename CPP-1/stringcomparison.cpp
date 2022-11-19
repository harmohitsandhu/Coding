#include<iostream>
#include<string.h>
using std::cout;
using std::cin;
int main(){
    char a[200]= "Narinder", b[200];
    int c=0;
    cout<<"Enter your password\n";
    cin>>b;
    c=strcmp(a,b);
    if(c==0)
    {
        cout<<"Correct password";
    }
    else
    {
        cout<<"Incorrect password";
    }
}