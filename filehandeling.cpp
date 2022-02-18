#include<iostream>
#include<string>
#include<iomanip>
#include<fstream>
using namespace std;
int main()
{
    fstream file;
    file.open("example.txt",ios::out|ios::in|ios::trunc);
    file<<"This is the file message"<<endl;
    
    file.close();
    return 0;
}