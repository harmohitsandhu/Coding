#include<iostream>
/*There are two types of header files
1. System header files: it comes with the compiler
2. User defined header files: It is written by the programmer */
using namespace std;
// #include"this.h"- this will produce an error if this.h is not present in the current directory.
int main(){
    int a=4, b=5;
    cout<<"Operators in C++"<<endl;
    cout<<"Following are the types of Operators in C++"<<endl;
    //Arithmetic Operators
    cout<<"The value of a + b is "<<a+b<<endl;
    cout<<"The value of a - b is "<<a-b<<endl;
    cout<<"The value of a * b is "<<a*b<<endl;
    cout<<"The value of a / b is "<<a/b<<endl;
    cout<<"The value of a % b is "<<a%b<<endl;
    cout<<"The value of a++ is "<<a++<<endl;
    cout<<"The value of a-- is "<<a--<<endl;
    cout<<"The value of ++a is "<<++a<<endl;
    cout<<"The value of --a is "<<--a<<endl;
    cout<<endl;
    // Assignment Operators --> used to assign values to variables
    // int a= 3, b=9;
    // char d='d';

    // Comparison Operators -->
    cout<<"Following are the Comparison Operators in C++"<<endl;
    cout<<"The value of a == b is "<<(a==b)<<endl;
    cout<<"The value of a != b is "<<(a!=b)<<endl;
    cout<<"The value of a >= b is "<<(a>=b)<<endl;
    cout<<"The value of a <= b is "<<(a<=b)<<endl;
    cout<<"The value of a > b is "<<(a>b)<<endl;
    cout<<"The value of a < b is "<<(a<b)<<endl;

        // Logical Operators -->
    cout<<"Following are the Logical Operators in C++"<<endl;
    cout<<"The value of this logical and operator ((a==b) && (a<b)) is "<<((a==b) && (a<b))<<endl;
    cout<<"The value of this logical or operator ((a==b) || (a<b)) is "<<((a==b) || (a<b))<<endl;
    cout<<"The value of this logical not operator (!(a==b)) is "<<(!(a==b))<<endl;
    return 0;
}