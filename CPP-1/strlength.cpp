#include<iostream>
#include<string.h>
using std::cout;
using std::cin;
int main(){
   int a;
   char b[20];
   cout<<"Enter a term to count its alphabets\n";
   cin>>b;
   a=strlen(b);
   cout<<"Length is "<<a;
}