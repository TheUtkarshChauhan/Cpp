#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class Employee
{
    private:
    int x;
    public:
    Employee();
    void display();
};
Employee::Employee()
{
    x =0;
}
void Employee::display()
{
    cout <<"Value of x is:"<< x << endl;
}
int main()
{
    Employee e[5];
    for (int i = 0; i < 5; i++)
    {
        e[i].display();
    }
    
    return 0;
}