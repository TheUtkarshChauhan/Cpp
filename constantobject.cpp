#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class Distance 
{
    private:
    int feet;
    float inches;
    public:
    Distance(int ft, float in)
    {

    }
    void getdist()
    {
        cout<<"\nEb=nter Feet:"; cin>>feet;
        cout<<"Enter inches:"; cin>> inches;
    }
    void showdist() const
    {
        cout << feet<<"\'-"<<inches<<'\"';
    }
};
int main()
{
    const Distance football(300,0);
    // football.getdist();
    return 0;
}