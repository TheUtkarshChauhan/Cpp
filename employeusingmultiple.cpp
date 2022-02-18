#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class Person
{
    private:
    
    public:
    string name;
    string gender;
    int age;
};
class company 
{
    private:
    protected:
    int basesalary;
    public:
    string proallowance;
    string departments;
};
class employee : public Person,public company
{
    private:
    int empphone;
    public:
    int empid;
    string position;
    void setdata();
    void display();
};
void employee::setdata()
{
    cout<<"Enter Employee name: ";
    getline(cin,name);
    cout<<"Enter gender: ";
    getline(cin,gender);
    cout<<"Enter age: ";
    cin>>age;
    cout<<"Enter employee phonenumber: ";
    cin>>empphone;
    cout<<"Enter Employee ID: ";
    cin>>empid;
    cout<<"Enter Employee Position: ";
    getchar();
    getline(cin,position);
    cout<<"Enter employee salary";
    cin>>basesalary;
    cout<<"Enter Allowance by company:";
    getchar();
    getline(cin,proallowance);
    cout<<"Enter Employee Department: ";
    getline(cin,departments);
}
void employee::display()
{
    cout<<"Employee name:: "<<name<<endl;
    
    cout<<"gender:: "<<gender<<endl;
    
    cout<<"Age:: "<<age<<endl;
    
    cout<<"Phonenumber:: "<<empphone<<endl;
    
    cout<<"Employee ID:: "<<empid<<endl;
    
    cout<<"Employee Position:: "<<position<<endl;
   
    cout<<"Employee salary::"<<basesalary<<endl;
    
    cout<<"Allowance by company::"<<proallowance<<endl;
    
    cout<<"Employee Department:: "<<departments<<endl;
    
}
int main()
{
    employee e1;
    e1.setdata();
    e1.display();
    return 0;
}