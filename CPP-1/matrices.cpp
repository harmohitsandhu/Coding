#include <iostream>
using namespace std;

int main(){
    int i,j,r,c,a[10][10];
    cout<<"Enter the number of rows";
    cin>>r;
    cout<<"Enter the number of columns";
    cin>>c;
    for (i = 1; i<=r; i++)
    {
        for (j = 1; j<=c; j++)
        {
            cin>>a[i][j];
        }
        
    }
    for (i = 1; i<=r; i++)
    {
        for (j = 1; j<=c; j++)
        {
            cout<<"\t"<<a[i][j];
        }
        cout<<"\n";
    }
    
}