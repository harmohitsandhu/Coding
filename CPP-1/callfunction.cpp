#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::string;
void h1()
{
    string h;
    cout<<"Enter the name to display = ";
    cin>>h;
    cout<<"Name is = "<<h<<"\n";
}
int main()
{
    for (int i = 1; i<=5; i++)
    {
        h1();
    }
}