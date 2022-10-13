#include<iostream>
using namespace std;
//complete
int main(){
    int o, n,a;
    cout<<"Welcome to Odd Even printer!\nPress 1 for odd numbers\nPress 2 for even numbers = ";
    cin>>n;
    cout<<"Enter the limit to you want to print = ";
    cin>>a;
    switch (n)
    {
    case 1:
        o=1;
        while (o<=a)
        {
            cout<<o<<endl;
            o+=2;
        }
        
        break;
    case 2:
        o=0;
        while (o<=a)
        {
            cout<<o<<endl;
            o+=2;
        }
        break;
    
    default:
        cout<<"Please choose from the list only";
        break;
    }
    return 0;
}