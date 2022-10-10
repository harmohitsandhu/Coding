#include<iostream>
using namespace std;
string fn,ln;
int tm;
float om,h,pc;
int main() {
    cout<<"Enter your first name: \n";
    cin>>fn;
    cout<<"Enter your last name: \n";
    cin>>ln;
    cout<<"Your full name is \n"<<fn<<" "<<ln<<endl;
    cout<<"Enter your height\n";
    cin>>h;
    cout<<"Your height is \n"<<h<<"ft"<<endl;
    cout<<"Enter marks obtained in secondary: \n";
    cin>>om;
    cout<<"Enter Total Marks: \n";
    cin>>tm;
    pc=om*100/tm;
    cout<<"Your percentage is = "<<pc<<"%";
    return 0;
}