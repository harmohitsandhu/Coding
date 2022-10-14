#include<iostream>
using std::cout;
using std::endl;
using std::cin;
int main(){
    int num, first=0, second=1, next,i; // num means number input
    cout<<"Welcome to Fibonacci Series Calculator!\nEnter the number of terms = ";
    cin>>num;
    cout<<"Fibonacci Series: \n";
    for (i=0; i<num; i++)
    {
        cout<<first<<"\n";// 0->1->1->2
        next=first+second;// 0+1=1->1+1=2->1+2=3->2+3=5
        first=second;// first=1->1->2->3
        second=next;// second= 1->2->3->5
    }
    return 0;
}