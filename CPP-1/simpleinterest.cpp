#include<iostream>
using std::cout;
using std::cin;
int fun(int,float,int);
int main(){
    int p,t,si;
    float r;
    cout<<"\nEnter Principle Amount = ";
    cin>>p;
    cout<<"Rate = ";
    cin>>r;
    cout<<"Enter time in years = ";
    cin>>t;
    si=fun(p,r,t);
    cout<<si;
}
int fun(int x,float y,int z){
    int c;
    c=(x*y*z)/100;
    cout<<"Your Simple Interest is = ";
    return(c);
}