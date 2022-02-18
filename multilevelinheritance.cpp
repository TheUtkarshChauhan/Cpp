#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class grandfather
{
    private:
    public:
    
    string grandname;
};
class father : public grandfather
{
    private:
    protected:
    int phoneno;
    public:
    string fname;
    
};
class child : public father
{
    private:
    public:
    int age;
    string gender;
    string name;
    void setdata();
    void display();

};
void child::setdata()
{
    cout<<"Enter name of child";
    getline(cin, name);
    cout<<"\n***************************************************"<< endl;
    cout<<"Enter age of child";
    cin>>age;
    cout<<"\n***************************************************"<< endl;
    cout<<"Enter gender of child";
    getchar();
    getline(cin, gender);
    cout<<"\n***************************************************"<< endl;
    cout<<"Enter the father name of child";
    getline(cin, fname);
    cout<<"\n***************************************************"<< endl;
    cout<<"Enter Father phone number of child";
    cin>>phoneno;
    cout<<"\n***************************************************"<< endl;
    cout<<"Enter the grand father name of child";
    getchar();
    getline(cin, grandname);
}
void child::display()
{
    cout<<"Details of child are as follows:"<< endl;
    cout<<"\n";
    cout<<"Child Name :"<<name<<endl;
    cout<<"\n";
    cout<<"Child Age :"<<age<<endl;
    cout<<"\n";
    cout<<"Gender :"<<gender<<endl;
    cout<<"\n";
    cout<<"father Name :"<<fname<<endl;
    cout<<"\n";
    cout<<"grand father Name :"<<grandname<<endl;
}
int main()
{
    child c1;
    c1.setdata();
    c1.display();
    return 0;
}