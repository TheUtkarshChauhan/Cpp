#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class Shape 
{
    private:
    float radius; // radius
    float length; // length of rectangle
    float breadth;// breadth of the rectangle
    public:
    Shape ()//Constructor
    {
        cout<<"Enter radius: ";
        cin >> radius;
        // cout<<"\nperimeter of Circle: ";
        // cout<<(2*3.14*radius);
        cout<<"\nEnter length and breadth: ";
        cin >> length;
        cin>> breadth;
        // cout<<"\nPerimeter of Rectangle: ";
        // cout<<(2*(length+breadth));
    }
    ~Shape()
    {
        cout<<"\nperimeter of Circle: ";
        cout<<(2*3.14*radius);
        cout<<"\nPerimeter of Rectangle: ";
        cout<<(2*(length+breadth));

    }
    
};

int main()
{
    Shape s1;
    return 0;
}