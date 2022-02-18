#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
void sumfirst(int num){
    int sum =0;
    int n=1;
    while (n!=10)
    {
        if (num % 2 ==0)
        {
            sum = sum + num;
            
            n++;
        }
        num++;

    }
    
    cout<<"the sum is: "<<sum;
    
}
int main()
{
    int num =1;
    sumfirst(num);
    return 0;
}