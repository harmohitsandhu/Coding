#include<iostream>
using std::cout;
using std::cin;
class name
{
    private:
    char name[20];
    public:
    void rd();
    void dp();
};
class details:public name
{
    private:
    int age;
    float height;
    char add[100];
    public:
    void rd();
    void dp();
};
void name::rd()
{
    cout<<"Enter your name = ";
    cin>>name;
}
void name::dp()
{
    cout<<"\nYour name is "<<name;
}
void details::rd()
{
    name::rd();
    cout<<"\nEnter your height (in cm) = ";
    cin>>height;
    cout<<"\nEnter your address = ";
    cin>>add;
}
void details::dp()
{
    name::dp();
    cout<<"\nYour height is "<<height<<" cm";
    cout<<"\nYour address is "<<add;
}
int main()
{
    details d;
    cout<<"\nEnter the following information\n";
    d.rd();
    d.dp();
}