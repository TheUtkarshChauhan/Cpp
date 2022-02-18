#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class Person
{
    private:
    public:
    char name[64];
    int age;
    char address[64];
    long salary;
    
    Person ()
    {
        cout<<"Enter Name: ";
        cin >> name;
        cout<<"\nEnter Age: ";
        cin >> age;
        cout<<"\nEnter Salary: ";
        cin >> salary;
        cout<<"\nEnter Address: ";
        cin >> address;
    }
    
};
// void age(Person e[], int n)
// {
//     int largest = e[0].age;
//     int smallest = e[0].age;
//     for (int i = 0; i < n; i++)
//     {
//         if (largest<e[i].age)
//         {
//             largest = e[i].age;
//         }
        
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (smallest>e[i].age )
//         {
//             smallest = e[i].age;
//         }
        
//     }
//     cout<<"Oldest age: "<<largest;
//     cout<<"Youngest age: "<<smallest;
// }
int main()
{
    int n;
    cout<<"Enter the number of Persons"<<endl;
    cin>>n;
    Person e[2];
    for (int i = 0; i < n; i++)
    {
        e[i];
    }
    int largest = e[0].age;
    int smallest = e[0].age;
    for (int i = 0; i < n; i++)
    {
        if (largest<e[i].age)
        {
            largest = e[i].age;
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        if (smallest>e[i].age )
        {
            smallest = e[i].age;
        }
        
    }
    cout<<"Oldest age: "<<largest;
    cout<<"Youngest age: "<<smallest;
    
    return 0;
}