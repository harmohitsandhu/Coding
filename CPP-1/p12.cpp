#include<iostream>
using std::cout;
using std::cin;
int main(){
    int a[10],i,n,b[10],j,sum;
    cout<<"Enter the number of terms = ";
    cin>>n;
    cout<<"Enter the elements of a = ";
    for (i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the elements of b = ";
    for (j=1; j<=n; j++)
    {
        cin>>b[j];
    }
    cout<<"Elements of a = ";
    for (i=1; i<=n; i++)
    {
        cout<<a[i];
    }
    cout<<"Elements of b = ";
    for (j=1; j<=n; j++)
    {
        cout<<b[j];
    }
    cout<<"Sum = "<<"\n";
    sum=a[i]+b[j];
    return (sum);
    getchar();
}