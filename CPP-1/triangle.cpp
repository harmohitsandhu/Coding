#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;
int main(){
    int a,b,c,n;
    string d;
    cout<<"Enter the symbol with which you want to make a triangle = ";
    cin>>d;
    cout<<"Enter the number of rows = ";
    cin>>n;
    for (int a = 0; a<=n; a++)
    {
        for (b=0; b<=a; b++)
        {
            cout<<" *";
        }
        cout<<"\n";
        
    }
    
    return 0;
}