#include<iostream>
#include<string.h>
using std::cout;
using std::cin;
int main(){
   int a;
   char b[20], c[20];
   cout<<"Enter a term to copy\n";
   cin>>b;
   strcpy(c,b);
   cout<<"Pasted string is "<<c<<" The string in b is "<<b;
}