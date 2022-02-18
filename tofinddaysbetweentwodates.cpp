#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int check(int dd,int mm,int yy)
{
    if (yy>=1900 && yy<=9999)
    {
        if (mm>=1 && mm<=12)
        {
            if ((dd>=1 && dd<=31) && (mm==1 || mm==3 || mm==5 || mm==7 || mm==8 || mm==10 || mm==12))
            {
                cout<<"Date is valid."<<endl;
            }
            else if ((dd>=1 && dd<=30) && (mm==4 || mm==6 || mm==9 || mm==11))
            {
                cout<<"Date is valid."<<endl;
            }
            else if (dd==29 && mm==2 && (yy%400==0 ||(yy%4==0 && yy%100!=0)))
            {
                cout<<"Date is valid."<<endl;
            }
            else
            {
                cout<<"Date is invalid. please start the program again"<<endl;
                
            }
            
            
            
            
        }
        
    }
    
}
int daycalulator(int dd1,int mm1,int yy1,int dd2, int mm2, int yy2)
{
    int sum =0;
    int n1,n2;
    
        //no of days in date 1
    if ((yy1%400==0 ||(yy1%4==0 && yy1%100!=0)))
    {
        if ( (mm1==1 || mm1==3 || mm1==5 || mm1==7 || mm1==8 || mm1==10 || mm1==12))
        {
            for (int i = 1; i < 31; i++)
            {
                sum +=1;
            }
            if (mm1 ==1)
            {
                sum = sum *1;
            }
            else if (mm1 ==3)
            {
                sum = sum *2;
            }
            else if (mm1 ==5)
            {
                sum = sum *3;
            }
            else if (mm1 ==7)
            {
                sum = sum *4;
            }
            else if (mm1 ==8)
            {
                sum = sum *5;
            }
            else if (mm1 ==10)
            {
                sum = sum *6;
            }
            
        }
        if ((mm1==4 || mm1==6 || mm1==9 || mm1==11))
        {
            for (int i = 1; i < 30; i++)
            {
                /* code */
            }
            
        }
        
        
    }
    
    
}
int main()
{
    int dd1,mm1,yy1;
    int dd2,mm2,yy2;
    cout<<"Enter the date as per the format:(DD/MM/YYYY) "<<endl;
    cout<<"Enter the first Date";
    cin>> dd1;
    cin>> mm1;
    cin>> yy1;
    cout<<"Enter the second Date";
    cin>> dd2;
    cin>> mm2;
    cin>> yy2;
    check(dd1,mm1,yy1);
    check(dd2,mm2,yy2);
    return 0;
}