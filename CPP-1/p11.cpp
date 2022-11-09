#include<iostream>
using std::cout;
using std::cin;
int main(){
    int a[10],i,n;
    cout<<"Enter the number of terms = ";
    cin>>n;
    for (i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    for (i=1; i<=n; i++)
    {
        cout<<a[i]<<" ";
    }
    getchar();
}