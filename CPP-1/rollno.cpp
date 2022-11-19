#include<iostream>
using std::cout;
using std::cin;
using std::endl;
class rollno
{
private:
    int r,rn;
public:
    void writedata(){
        cout<<"Enter the roll number";
        cin>>rn;
    }
    void readdata(int rn){
        r=rn;
        // cout<<"Enter the roll number";
        // cin>>rn;
    }
    void display(){
        cout<<"Roll no is "<<rn;
    }
};
int main(){
    class rollno roll, roll1, roll2, roll3, roll4;
    roll.writedata();
    roll.display();
    // roll.readdata(9999134);
    // roll.display();
    // roll1.readdata(2496496);
    // roll1.display();
    // roll2.readdata(4979461);
    // roll2.display();
    // roll3.readdata(7962498);
    // roll3.display();
}