#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class BankAccount
{
    private:
    long accountid;
    char name[50];
    double openingbalance;
    double amount;
    char branch[50];
    public:
    void input();
    // void setopeningbalance();
    void checkbalance();
    void display();
    BankAccount();
};
void BankAccount::input() 
{
    cout<<"Enter Account id: ";
    cin >> accountid;
    cout<<"\nEnter name of consumer: ";
    cin>> name;
    cout<<"\nEnter branch:";
    cin>> branch;
}
BankAccount::BankAccount()
{
    amount =10000;
}

// void BankAccount::setopeningbalance()
// {
//     amount = 10000;
// }
void BankAccount::checkbalance()
{
    cout<<"Checking bank balance..."<<endl;
    cout<<amount<<endl;
}
void BankAccount::display()
{
    cout<<"Account Id: "<<accountid<<"\nName of custome: "<<name<<"\nAmount :"<<amount<<"\nBranch: "<<branch<<endl;
}
int main()
{
    BankAccount B1,B2;
    B1.input();
    // B1.setopeningbalance();
    B1.checkbalance();
    B1.display();
    // Consumer 2
    B2.input();
    // B2.setopeningbalance();
    B2.checkbalance();
    B2.display();
    return 0;
}