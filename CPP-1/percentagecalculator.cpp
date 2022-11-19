#include<iostream>
using namespace std;
float om, tm;
int main(){
    cout<<"Welcome to the Percentage Calculator\n";
    cout<<"Enter the value of obtained marks: \n";
    cin>>om;
    cout<<"Enter the value of total marks: \n";
    cin>>tm;
    cout<<"The percentage is= \n"<<om*100/tm;
    return 0;
}