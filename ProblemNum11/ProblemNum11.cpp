#include <iostream>   
#include <string>     
using namespace std;

/*Write a program to read a number and 
determine if the number reads the same forwards and backward (Palindrome)*/

int ReadPositiveNumber(string Message)
{
    int Number = 0;

    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}

int PrintReverseNumber(int Number)
{
    int ReverseNumber = 0, Remainder = 0;
    while (Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;
        ReverseNumber = ReverseNumber * 10 + Remainder;

    }
    return ReverseNumber;
}

bool IsPalindromeNumber(int Number)
{

    return Number == PrintReverseNumber(Number);
    
}
int main()
{
    int Number = ReadPositiveNumber("Please enter a positive number?");

    
    if (IsPalindromeNumber(Number))

        cout << "Yes , it is a Palindrome number" << endl;
    else
        cout << "No , it is NOT a Palindrome number" << endl;
       

    return 0;
}