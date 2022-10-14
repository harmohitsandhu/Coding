#include<iostream>
using std::cout;
using std::endl;
using std::cin;
int main(){
    int i,n,n1=0,n2=1,n3;
    cout<<"Welcome to Fibonacci Series Calculator!\nEnter the number of terms = ";
    cin>>n;
    cout<<"Fibonacci Series: \n"<<n1<<" "<<n2<<" ";
    for (i=3; i<=n; i++)
    {
        n3=n1+n2;
        n1=n2;
        n2=n3;
        cout<<n3<<" ";
    }
    return 0;
}