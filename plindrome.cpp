#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main() {
int n, num, digit, rev = 0;
cout << "Enter a positive number: ";
cin >> num;
n = num;
do {
digit = num % 10;
rev = (rev * 10) + digit;
num = num / 10;
} while (num != 0);
cout << "The reverse of the number is: " << rev << endl;
if (n == rev) {
cout << "The number is a palindrome.\n";
} else {
cout << "The number is not a palindrome.\n";
}
char string1[20];
int i, length;
int flag = 0;
cout << "Enter a string: "; cin >> string1;
length = strlen(string1);
for(i=0;i < length ;i++){
if(string1[i] != string1[length-i-1]){
flag = 1;
break;
}
}
if (flag) {
cout << string1 << " is not a palindrome" << endl; 
} else {
cout << string1 << " is a palindrome" << endl; 
}
getch();
}