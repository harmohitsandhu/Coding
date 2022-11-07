#include<iostream>
using std::cout;
using std::cin;
int fib(int n){
    if(n<=1)
    {
        return(n);
    }
    else
    {
        return fib(n-1)+fib(n-2);
    }
}
int main(){
    int n;
    cout<<"Welcome to Fibonacci Calculator!\nEnter the number of terms = ";
    cin>>n;
    cout<<fib(n);
    return 0;
}