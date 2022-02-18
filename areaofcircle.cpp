#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
void area(float x)
{
    const float pi=3.14;
    float ar;
    ar = pi*x*x;
    cout<<"The area of the circle is: "<<ar;
}
int main()
{
    
    float x;
    cout<<"Enter the radius of the circle: ";
    cin >> x;
    area(x);
    return 0;
}