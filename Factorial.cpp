#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int factorial(int num)
{
    int fact = 1;
    for (int i = 1; i <= num; num--)
    {
        fact = fact * num;
        
    }
    return fact;
    
}
int main()
{
    
    int num;
    cout<<"Enter the Nuber to find the factorial"<<endl;
    cin >> num;
    int fact = factorial(num);
    cout<<"Factorial is"<< fact <<endl;
    return 0;
}