#include<iostream>
using namespace std;
float om, tm,p;
int main(){
    cout<<"Welcome to the Grade Calculator"<<endl;
    cout<<"Enter the value of obtained marks: \n";
    cin>>om;
    cout<<"Enter the value of total marks: \n";
    cin>>tm;
    p=om*100/tm;
    cout<<"The percentage is = "<<p<<endl;
    if(p>=95)
    {
        cout<<"Your Grade is A+ ";
    }
    else if((p<95)&&(p>80))
    {
        cout<<"Your Grade is A ";
    }
    else if(p<=50)
    {
        cout<<"Pass";
    }
    return 0;
}