#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class Student
{
    private:
    int enrollid;
    string stdname;
    string section;
    int feepaid;
    public:
    void input (){
        cout << "Enter the Id: \n";
        cin >> enrollid;
        cout << "Enter Student Name: \n";
        cin >> stdname;
        cout << "Enter Section: \n";
        cin >> section;
    }
    void intialize() {
        feepaid = 150000;
    }
    void display()
    {
        cout <<"ID : "<<enrollid<<"\nStudent Name: "<<stdname<<"\nSection: "<<section<<"\nFee Paid: "<<feepaid<<"\n";
            }
};
int main()
{
    Student s1,s2;
    s1.input();
    s1.intialize();
    
    s2.input();
    s2.intialize();
    s1.display();
    s2.display();
    return 0;
}