#include<iostream>
using namespace std;
//under progress
int main(){
    int o, n;
    cout<<"Welcome to Odd Even printer!\nPress 1 for odd numbers\nPress 2 for even numbers"<<endl;
    cin>>n;
    o=1;
    switch (n)
    {
    case 1:
        while (o<=10)
        {
            cout<<"Jatt"<<o+2<<endl;
        }
        
        break;
    case 2:
        /* code */
        break;
    
    default:
        cout<<"Please choose from the list only";
        break;
    }
    return 0;
}