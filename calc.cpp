// This program tests input and if else capabilities of C++. This takes it and uses it in a calculator setup.

#include <iostream>
using namespace std;

int num1;
int num2;
char valueOperator;

int main() {
cout << "Welcome to calculator. Please type the first number of your equation:" << endl;
cin >> num1;
cout << "The number you typed is " << num1 << ". Now type the operating symbol you would like to use. (*, +, -, /)" << endl;
cin >> valueOperator;
cout << "The symbol you typed is " << valueOperator << ". Now type the second number of the equation." << endl;
cin >> num2;
cout << "The number you typed is " << num2 << ". Now processing your request...";
if (valueOperator == '*') {
    int sum = num1 * num2;
    cout << "The result is " << sum << ". Thank you for using calculator." << endl;
    return 0;
}
if (valueOperator == '+') {
    int sum = num1 + num2;
    cout << "The result is " << sum << ". Thank you for using calculator." << endl;
    return 0;
}
if (valueOperator == '-') {
    int sum = num1 - num2;
    cout << "The result is " << sum << ". Thank you for using calculator." << endl;
    return 0;
}
if (valueOperator == '/') {
    int sum = num1 / num2;
    cout << "The result is " << sum << ". Thank you for using calculator." << endl;
    return 0;
}
else {
    cout << "FATAL ERROR: CHARACTER IN 'operator' NOT FOUND IN SYSTEM. PLEASE RESTART PROGRAM AND TRY AGAIN." << endl;
    return 0;
}
return 0;
}
