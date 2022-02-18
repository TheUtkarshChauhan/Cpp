#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int swap(int &a , int &b)
{
    int temp;
    temp = a;
    a=b;
    b= temp;
}
int main()
{
    int a,b;
    cout<<"Enter the numbers before swap: ";
    cin >> a;
    cout<<endl;
    cin >> b;
    cout<<endl;
    cout<<"before swap: "<<a <<" "<<b<<endl;
    swap(a,b);
    cout<<"after swapping"<<a<<" "<<b;
    return 0;
}