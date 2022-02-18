#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
void aFunc(int &a, const int &b)
{
    a =107;
    // b =111; Function shuld me modidfiable
}
int main()
{
    int alpha =7;
    int beta =11;
    aFunc(alpha, beta);

    return 0;
}