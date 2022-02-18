#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
void test(int num) 
{
    if (num>0)
    {
        cout <<"Number is a positive number" << endl;
    }
    else
    {
        cout <<"Number is not a positive number" << endl;
    }
    
}
int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    test(num);
    return 0;
}