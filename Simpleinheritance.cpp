#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class Polygon
{
    private:
    public:
    int length,breadth;
    Polygon()
    {
        this->length = 0;
        this->breadth = 0;
    }
    void getdim();

};
class Rectangle: public Polygon
{
    private:
    public:
    
    void area();
};
void Polygon::getdim()
{
    cout<<"Enter the Length of the Rectangle"<<endl;
    cin>>length;
    cout<<"Enter the breadth of the Rectangle"<<endl;
    cin>>breadth;
}
void Rectangle::area()
{
    cout<<"Area of the Rectangle is"<<(length*breadth)<<endl;
}
int main()
{
    Rectangle r1;
    r1.getdim();
    r1.area();
    return 0;
}