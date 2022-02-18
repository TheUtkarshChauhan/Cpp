#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class animal
{
    private:
    public:
    string name;
    int weight;
    string foodtype;
    void setdata()
    {
        cout<<"Enter Animal name:";
        getline(cin, name);
        cout<<"Food type: ";
        getline(cin, foodtype);
        cout<<"Weight: ";
        cin>>weight;
    }
    void display()
    {
        cout<<"name: "<<name<<"\nweight: "<<weight<<"\nfoodtype:"<<foodtype;
    }
};
class lion: public animal
{
    private:
    public:
    string lionsound="The king of the jungle Roars";
    string power="He is known as the king of the jungle";
    
    void displaylion()
    {
        display();
        cout<<lionsound<<endl;
        cout<<power;
    }
};
class cat: public animal
{
    private:
    public:
    string catsound ="The cat growls and mummers";
    string catpower ="She is known to have nine lifes";
    void displaycat(){
        display();
        cout<<catsound<<endl;
        cout<<catpower;
    }
};
int main()
{
    lion l1;
    l1.setdata();
    l1.displaylion();
    cat c1;
    c1.setdata();
    c1.displaycat();
    return 0;
}