#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class bata;
class alpha
{
    private:
    int data1;
    public:
    alpha()
    {
        data1 =3;
    }
    friend int frifunc(alpha, bata);
};
class bata
{
    private:
    int data;
    public:
    bata(): data (7) {}
    friend int frifunc(alpha,bata);

};
int frifunc(alpha a, bata b)
{
    return (a.data1 + b.data);
}
int main()
{
    alpha aa;
    bata bb;
    cout <<frifunc(aa,bb)<<endl;
    return 0;
}