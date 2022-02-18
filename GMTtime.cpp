#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class Gmt
{
    public:
    int timeinhour;
    int timeinmin;
    static int diffhour;
    static int diffmin;
    void inputDelhi();
    void inputLondon();
    void timediff(Gmt t1, Gmt t2);
    void timeconversionlondon(Gmt london);
    void timeconversionDelhi(Gmt Delhi);
};
void Gmt :: inputDelhi()
{
    cout << "Enter the hours of the Delhi:"<<endl;
    cin >> timeinhour;
    cout<<"Enter the minutes of the Delhi:"<<endl;
    cin >> timeinmin;
}
void Gmt :: inputLondon()
{
    cout << "Enter the hours of the London:"<<endl;
    cin >> timeinhour;
    cout<<"Enter the minutes of the London:"<<endl;
    cin >> timeinmin;
}
void Gmt :: timediff(Gmt t1, Gmt t2)
{
    int hours;
    int min;
    hours = t1.timeinhour - t2.timeinhour;
    min = t1.timeinmin - t2.timeinmin;
    diffhour = hours;
    diffmin = min;
    cout<<"The time difference is: "<<hours<<" hours "<<min<<" min "<<endl;
}
void Gmt :: timeconversionlondon(Gmt london)
{
    //Delhi time conversion
    cout<<"Enter the time of london to find Delhi time:"<<endl;
    cout<<"Enter hour: "<<endl;
    cin>>london.timeinhour;
    cout<<"Enter min: "<<endl;
    cin>>london.timeinmin;
    london.timeinhour = london.timeinhour +diffhour;
    london.timeinmin = london.timeinmin +diffmin;
    if (london.timeinmin +diffmin>60)
    {
        london.timeinhour++;
        london.timeinmin =london.timeinmin - 60;
    }
    cout<<"time of Delhi is:"<<london.timeinhour<<" hour "<<london.timeinmin<<" min"<<endl;
}
void Gmt :: timeconversionDelhi(Gmt Delhi)
{
    //london time conversion
    int min=0;
    int temp=Delhi.timeinmin;
    // cout<<"Enter the time of Delhi to find London time:"<<endl;
    // cout<<"Enter hour: "<<endl;
    // cin>>Delhi.timeinhour;
    // cout<<"Enter min: "<<endl;
    // cin>>Delhi.timeinmin;
    
    if (Delhi.timeinhour>4)
    {
        Delhi.timeinhour = Delhi.timeinhour - 4;
        
        
    }
    else
    {
        Delhi.timeinhour =Delhi.timeinhour-4;
        if (Delhi.timeinhour<=0)
        {
            Delhi.timeinhour = 12 +Delhi.timeinhour;
        }
        
    }
    
    
        Delhi.timeinmin =30- Delhi.timeinmin ;
    
    
    
    if (Delhi.timeinmin<0)
    {
        Delhi.timeinhour--;
        Delhi.timeinmin = Delhi.timeinmin + temp;
    }
    cout<<"time of London is:"<<Delhi.timeinhour<<" hour "<<Delhi.timeinmin<<" min"<<endl;
}
int Gmt :: diffhour=4;
int Gmt :: diffmin=30;
int main()
{
    Gmt delhi,london,timedifference,delhi1,london1;
    delhi.inputDelhi();
    london.inputLondon();
    timedifference.timediff(delhi,london);
    delhi1.inputDelhi();
    london1.timeconversionDelhi(delhi1);
    // time Difference between delhi and london
    //Delhi is 4 hours and 30 minutes ahead of London, UK
    return 0;
}