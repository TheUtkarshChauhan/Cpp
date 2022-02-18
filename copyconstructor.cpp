#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class Aclass
{
    private:
    public:
    int data;
    // Aclass() : data(0) {}
    Aclass(){
        this->data =0;
    }
    void input()
    {
        cout<<"Enter Data"<<endl;
        cin>>data;
    }
    Aclass(Aclass& a)
    {
        data;
    }
};
int main()
{
    Aclass a1,a2;
    
    return 0;
}