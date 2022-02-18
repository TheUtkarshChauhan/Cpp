#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
void evenodd(int num) 
{
    if (num%2==0) 
    {
        cout<<"Number is Even";
    }
    else{
        cout<<"Number is Odd";
    }
    
}
int main()
{
    int num;
    cout<<"Enter the number to find Even or Odd condition: ";
    cin >> num;
    evenodd(num);
    return 0;
}