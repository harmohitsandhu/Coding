#include<iostream>
using std::cin;
using std::cout;
class user
{
private:
    char n[20], s;
    int age;
public:
void input(){
    cout<<"Enter your name = ";
    cin>>n;
    cout<<"Enter your gender = ";
    cin>>s;
    cout<<"Enter your age = ";
    cin>>age;
}
void output(){
    cout<<"\nYour name is "<<n;
    cout<<"\nYour gender is "<<s;
    cout<<"\nYour age is "<<age;
}
};
class info
{
private:
    char st[20];
    float per;
public:
void input(){
    cout<<"Enter the stream you chose in your 12th std = ";
    cin>>st;
    cout<<"Enter the percentage = ";
    cin>>per;
}
void output(){
    cout<<"\nYour stream is "<<st;
    cout<<"\nYour percentage is "<<per;
    if ((per<65)&&(per<=100))
    {
        cout<<"\nYour are eligible for admission";
    }
    else
    {
        cout<<"\nYou are not eligible for admission";
    }
}
};
class fees:public user,public info
{
private:
    int fee;
public:
void write();
void disp();
};
void fees::write()
{
    user::input();
    info::input();
    cout<<"Your fees is ";
    cin>>fee;
}
void fees::disp()
{
    user::output();
    info::output();
    cout<<"\nYour fees is "<<fee;
}
int main()
{
    class fees obj;
    obj.write();
    obj.disp();
}