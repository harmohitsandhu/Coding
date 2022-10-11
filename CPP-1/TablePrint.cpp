#include<iostream>
using namespace std;
int main(){
    int n, m;
    cout<<"Welcome to Table printer!\nChoose a number to get its table till 10 = ";
    cin>>n;
    m=0;
    while (m<=10)
    {
        cout<<m<<"x"<<n<<"="<<m*n<<endl;
        m++;
    }
    return 0;
}