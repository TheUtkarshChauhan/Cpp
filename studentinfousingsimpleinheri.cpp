#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class school
{
    private:
    public:
    string standar;
    string classteacher;
    string principal;
    school()
    {
        this->standar ="NULL";
        this->classteacher ="NULL";
        this->principal ="NULL";
    }
};
class student: public school
{
    private:
    public:
    int rollno;
    int aggerper;
    int age;
    string name;
    student()
    {
        this->rollno =0;
        this->aggerper =0;
        this->age =0;
        this->name ="NULL";
    }
    void getdetails();
    void display();
};
void student::getdetails()
{
    cout << "Enter Student Name:"<<endl;
    getline(cin,name);
    cout<<"Enter Standar"<<endl;
    
    getline(cin,standar);
    cout<<"Enter Classteacher:"<<endl;
    
    getline(cin,classteacher);
    cout<<"Enter principal"<<endl;
    
    getline(cin,principal);
    cout<<"Enter Rollno: "<<endl;
    cin>>rollno;
    cout<<"Enter age:"<<endl;
    cin>>age;
    cout<<"Enter Percentage: "<<endl;
    cin>>aggerper;
}
void student::display()
{
    cout<<"Student Name: "<<name<<endl;
    cout<<"*******************************"<<endl;
    cout<<"Standard:"<<standar<<endl;
    cout<<"*******************************"<<endl;
    cout<<"Classteacher: "<<classteacher<<endl;
    cout<<"*******************************"<<endl;
    cout<<"School Principal:"<<principal<<endl;
    cout<<"*******************************"<<endl;
    cout<<"Student rollno:"<<rollno<<endl;
    cout<<"*******************************"<<endl;
    cout<<"Student Age: "<<age<<endl;
    cout<<"*******************************"<<endl;
    cout<<"Student Percentage: "<<aggerper<<endl;
}
int main()
{
    student s1;
    s1.getdetails();
    s1.display();
    return 0;
}