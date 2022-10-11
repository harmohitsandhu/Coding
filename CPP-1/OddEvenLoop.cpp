#include<iostream>
using namespace std;
//complete
int main(){
    int o, n;
    cout<<"Welcome to Odd Even printer!\nPress 1 for odd numbers\nPress 2 for even numbers = ";
    cin>>n;
    switch (n)
    {
    case 1:
        o=1;
        while (o<=20)
        {
            cout<<o<<endl;
            o+=2;
        }
        
        break;
    case 2:
        o=0;
        while (o<=20)
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