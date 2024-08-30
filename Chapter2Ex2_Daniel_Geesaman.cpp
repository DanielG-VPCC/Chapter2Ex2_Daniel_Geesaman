/*
Program file name: Chapter 2 Example 2 - Do something
File Name: Chapter2Ex2_Daniel_Geesaman.cpp
Programmer: Daniel Geesaman
Date: 08/2024
Requirements:
The East Coast sales complany generates 58 percent of total sales.
Based on that percentage write a prediction that will generate if the company generates $8.6 Million in profit.
*/

#include <iostream>
using namespace std;

//use 'void' instead of 'int' if the data isn't supposed to return.
int main()
{
    int number1;
    int number2;
    int answer;
    cout << "Please enter a number"<<endl;
    cin >> number1;
    cout << "Please enter a second number"<<endl;
    cin >> number2;
    answer = number1 + number2;
    cout << "The sum of " << number1 << " and " << number2 << " is:" << answer;
    return 0;

}

