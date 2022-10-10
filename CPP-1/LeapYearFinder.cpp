#include<iostream>
using namespace std;

int main (){
    int year, result4,result100,result400;
    cout<<"Welcome to Leap year finder!\nEnter the year below: ";
    cin>>year;
    result4=year%4;
    result100=year%100;
    result400=year%400;
    if(((result4==0)&&(result100!=0))||((result4==0)&&(result100==0)&&(result400==0)))
    {
        cout<<"Given year is a Leap year";
    }
    else
    {
        cout<<"Given year is not a Leap year";
    }
    return 0;
}