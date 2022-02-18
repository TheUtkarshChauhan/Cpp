
// static variable
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
#define MAX 10
class a {
    private:

    static int count;
    int x;
    public:
    void getdata(string name)
    {
        
        cout<<"Passengers name : "<<name<<endl;
        count ++;
    }
    void getcount (void)
    {
        cout <<"Total No of Passengers: " << count << endl;

    }
};
int a::count;
int main()
{
    a a1,a2,a3,a4,a5,a6;
    a1.getdata("Ramesh");
    a2.getdata("Vinayak");
    a3.getdata("Swastik");
    a4.getdata("NIkhil");
    a5.getdata("Nain");
    a6.getdata("kartik");
    a6.getcount();
    return 0;
}