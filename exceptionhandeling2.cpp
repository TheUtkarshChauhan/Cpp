#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
//To find sum of all natural numbers
int main()
{
    int arr[10];
    int sum=0;
    cout<<"enter natural numbers to find their sum:"<<arr<<endl;
    try
    {for (int i = 0; i < 10; i++)
    {
        cout<<"Enter "<<i+1<<" number"<<endl;
        cin>>arr[i];
        if (arr[i]<=0)
        {
            throw"Enter number greater than zero";
        }
        
    }
    }
    catch(const char*msg)
    {
        cout<<msg<<endl<<endl;
        cout<<"The program returned error"<<endl;
        exit(0);
    }
    int j=0;
    while (j!=10)
    {
        sum=sum+arr[j];
        j++;
    }
    cout<<"sum fo natural number is:"<<sum<<endl;
    
    return 0;
}