#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class a
{
    public:
    int num1;
    void getnum()
    {
        cout<<"Enter the frst number:";
        cin>>num1;
    }
};
class b 
{
    public:
    int num2;
    void getnum2()
    {
        cout<<"Enter the second number:";
        cin>>num2;
    }
};
class operations: public a, public b 
{
    public :
    void setdata()
    {
        getnum();
        getnum2();
    }
    void multiply()
    {
        cout<<"Multiply of two numbers are"<<num1*num2;
    }
    void add()
    {
        cout<<"Add of two numbers are"<<num1+num2;
    }
};
int main()
{
    operations o1;
    o1.setdata();
    o1.multiply();
    return 0;
}