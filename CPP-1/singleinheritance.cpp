#include<iostream>
using std::cout;
using std::cin;
class student
{
    private:
    int rollno;
    char a[20];
    public:
    void rd();
    void dp();
};
class marks:public student
{
    private:
    float phy, chem, bio, math,sum,tm;
    public:
    void rd();
    void dp();
};
void student::rd()
{
    cout<<"Enter your roll no = ";
    cin>>rollno;
    cout<<"Enter you name = ";
    cin>>a;
}
void student::dp()
{
    cout<<"\nYour roll no is "<<rollno;
    cout<<"\nYour name is "<<a;
}
void marks::rd()
{
    student::rd();
    cout<<"Enter marks obtained in Physics = ";
    cin>>phy;
    cout<<"Enter marks obtained in Chemistry = ";
    cin>>chem;
    cout<<"Enter marks obtained in Biology = ";
    cin>>bio;
    cout<<"Enter marks obtained in Maths = ";
    cin>>math;
    cout<<"Enter grand total of marks in all subjects = ";
    cin>>tm;
    sum=((phy+chem+math+bio)*100)/tm;
}
void marks::dp()
{
    student::dp();
    cout<<"Marks obtained in Physics, Chemistry, Biology and Math are  =\n"<<phy<<"\n"<<chem<<"\n"<<bio<<"\n"<<math<<"\n";
    cout<<"Percentage is "<<sum;
}
int main()
{
    marks m;
    cout<<"Enter the following information\n";
    m.rd();
    m.dp();
}