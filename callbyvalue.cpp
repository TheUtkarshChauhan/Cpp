#include<iostream>
#include<conio.h>
using namespace std;
void swapNumbers(int a, int b) {
int temp;
temp = a;
a = b;
b = temp;
}
int main() {
int a = 27, b = 2003;
swapNumbers(a, b);
cout << "Value of a : " << a;
cout << "\nValue of b : " << b;
return 0;
}