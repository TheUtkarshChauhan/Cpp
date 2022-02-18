#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class bank_account
{
    long int customer_id; // customer Identification number
    char customer_name[100]; // customer Name
    char account_number[100]; // customer Number
    float amount; // Amount in the bank
    public:
    void deposit()// for disposits made by the bank account
    {

    }
    void transfer()// for the money transfer
    {

    }
    void withdraw()// for withdrawl made by the bank account
    {

    }
    void input(){
        cout << "Enter the customer id, customer name, account no and balance" << endl;
        cin>>customer_id>>customer_name>>account_number>>amount>>amount;
    }
};
int main()
{
    bank_account cust1, cust2,cust3; //Objects for the above class
    cust1.input();
    return 0;
}