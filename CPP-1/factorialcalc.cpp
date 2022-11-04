#include<iostream>
using std::cout;
using std::cin;
int main(){
    int num,i,f=1;
    cout<<"Welcome to Factorial calculator!\nPlease enter a number = ";
    cin>>num;
    for (i =1; i<=num; i++)
    {
        f=f*i;
    }
    cout<<"factor  is = "<<f;
}