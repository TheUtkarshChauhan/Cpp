#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
void square(int a)
{
    int sq;
    sq =a*a;
    cout<<"The square of the number is: "<<sq;
}
int main()
{
    int a;
    cout<<"Enter the number to find the square: ";
    cin>>a;
    square(a);
    return 0;
}