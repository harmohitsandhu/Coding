#include<iostream>
#include<string.h>
using std::cout;
using std::endl;
using std::string;
int main()
{
    char a[200], b[200];
    int n;
    cout<<"hello what's ur name? \n";
    gets(a);
    cout<<"Hello my name is Harmohit Singh\n";
    gets(b);
    if (strcmp(a,b))
    {
        if(a>b)
        {
            cout<<"a is greater";
        }
        else
        {
            cout<<"b is greater";
        }
    }
    
    cout<<"Your full name is "<<strcmp(a, b);
}