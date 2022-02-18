#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int sumfirst(int num)
{
    int sum =0;
    for (int i = 0; i <= num; i++)
    {
        sum = sum +i;
    }
    cout<<"sum os first 10 number is: "<<sum;
}
int main()
{
    int num = 10;
    sumfirst(num);
    return 0;
}