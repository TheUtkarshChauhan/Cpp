#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class Employee
{
    private:
    long employeeid;
    string employeename;
    long number;
    double salary;
    string verification;
    public:
    Employee();
    void display();
};
Employee::Employee()
{
    cout<<"Enter the Emplyee ID:";
    cin >> employeeid;
    cout<<"\nEnter Employee name: ";
    // cin >> employeename;
    getchar();
    getline(cin, employeename);
    cout<<"\nEnter Employee Number: ";
    cin >> number;
    cout<<"\nEnter salary: ";
    cin >> salary;
    verification = "Document successfully verified";
    cout<<verification<<endl;
    // cout<<employeeid<<employeename<<number<<salary;
}
void Employee::display()
{
    cout<<employeeid<<"\n"<<employeename<<"\n"<<number<<"\n"<<salary;
}
int main()
{
    Employee e[10];
    e[1].display();
    return 0;
}