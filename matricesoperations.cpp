#include <iostream>
#include<conio.h>
using namespace std;
int addition(int a[2][2], int b[2][2])
{ 
int i, j;
int c[2][2];
for(i = 0; i < 2; i++) {
for(j = 0; j < 2; j++) {
c[i][j] = a[i][j] + b[i][j];
}
}
for(i = 0; i < 2; i++) {
for(j = 0; j < 2; j++) {
cout << c[i][j] << " ";
}
cout << endl;
}
return 0;
}
int subtraction(int a[2][2], int b[2][2])
{ 
int c[2][2];
int i, j;
for(i = 0; i < 2; i++) {
for(j = 0; j < 2; j++) {
c[i][j] = a[i][j] - b[i][j];
} 
}
for(i = 0; i < 2; i++) {
for(j = 0; j < 2; j++) {
cout << c[i][j] << " ";
}
cout << endl;
} 
return 0;
}
int multiplication(int a[2][2], int b[2][2])
{ 
int c[2][2];
int i, j, k;
for(i = 0; i < 2; i++) 
{
for(j = 0; j < 2; j++) 
{c[i][j] = 0;
for(k = 0; k < 2; k++) {c[i][j] += a[i][k] * b[k][j];}
} 
}
for(i = 0; i < 2; i++) {
for(j = 0; j < 2; j++) {
cout <<c[i][j] << " ";
}
cout << endl;
} 
return 0;
}
int transpose(int a[2][2])
{ 
int i, j;
int c[2][2];
for
(i = 0; i < 2; i++) {
for(j = 0; j < 2; j++) {
c[i][j] = a[j][i];
} 
}
for(i = 0; i < 2; i++) {
for(j = 0; j < 2; j++) {
cout <<c[i][j] << " ";
}
cout << endl;
} 
}
int main() {
int c;
int a[2][2], b[2][2];int i, j;
cout << "Enter the values for matrix A : ";
for(i = 0; i < 2; i++)
{
for(j = 0; j < 2; j++)
{cin >>a[i][j];
} 
}
cout << "Enter the values for matrix B : ";
for(i = 0; i < 2; i++)
{
for(j = 0; j < 2; j++)
{
cin >> b[i][j];
} 
} 
cout << "\n1. Addition";
cout << "\n2. Subtraction";
cout << "\n3. Multiplication";
cout << "\n4. Transpose";
cout << "\nEnter your choice : ";
cin >> c;
switch(c) {
case 1: addition(a, b);
break;
case 2: subtraction(a, b);
break;
case 3: multiplication(a, b);
break;
case 4: cout << "\nFor transpose of matrix A : \n";
transpose(a);
break;
default: cout<<"Enter a valid choice!";
break;
} 
}
