#include<iostream>
using namespace std;
void matricesdisp(int a[5][5],int n,int m=0)
{
    cout<<"\nThe Matrix is:\n";
    for(int i=0;i<m;++i)
    {
    for(int j=0;j<n;++j)
    cout<<a[i][j]<<" ";
    cout<<"\n";
    }
}
int main()
{

int a[5][5],n,m,i,j;
cout<<"Enter value of m and n:";
cin>>m>>n;
cout<<"\nEnter elemets of the matrix:";
for(i=0;i<m;++i)
for(j=0;j<n;++j)
cin>>a[i][j];
// cout<<"\nThe Matrix is:\n";
// for(i=0;i<m;++i)
// {
// for(j=0;j<n;++j)
// cout<<a[i][j]<<" ";
// cout<<"\n";
// }
matricesdisp(a,n,m);
return 0;
}