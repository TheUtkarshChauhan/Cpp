#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
// Program to divide a number
int main()
{
    int num,num2;
    int result;
    cout<<"Enter 1st number :"<<endl;
    cin>>num;
    cout<<"Enter 2ndnumber :"<<endl;
    cin>>num2;
    try
    {
        if(num2==0)
        {
            throw"The value of Denominator must not be equal to zero.Please re-enter the value";
        }
        result=num/num2;
        cout<<"The result is :"<<result<<endl;
    }
    catch(const char*msg)
    {
        cout<<msg<<endl<<endl;
        cout<<"The program returned error"<<endl;
    }
    
    return 0;
}