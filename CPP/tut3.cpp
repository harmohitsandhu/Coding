#include<iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout<<"Enter the value of num1:\n"; /* '<<' is Insertion operator */
    cin>>num1;/* '>>' is Extraction operator */

    cout<<"Enter the value of num2:\n"; /* '<<' is Insertion operator */
    cin>>num2;/* '>>' is Extraction operator */
    
    cout<<"The sum is "<<num1+num2;
    return 0;
}