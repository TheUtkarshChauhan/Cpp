#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class A
{
    protected:
    int x;
    public:
    A()
    {
        this->x =0;
    }
    A(int c)
    {
        this->x = c;
    }
    int get()
    {
        return x;
    }
};
class B: public A
{
    public:
    void input()
    {
        cin>>x;
    }
    void factor()
    {
        int fact =1;
        for (int i = 1; i <= x; i++)
        {
            fact =fact*i;
        }
        
    }
};
int main()
{
    A a1;
    B b1;
    a1.get();
    b1.get();
    b1.input();
    b1.factor();
    return 0;
}