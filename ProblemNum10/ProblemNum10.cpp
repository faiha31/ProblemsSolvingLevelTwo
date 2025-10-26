#include <iostream>   
#include <string>     
using namespace std;

/*Write a program to read a number 
and print it in the correct order (from left to right).*/

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
void PrintDigitsInOrder(int Number)
{
    int Sum = 0, Remainder = 0;
    while (Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;
        cout << Remainder << endl;
    }
}

int main()
{
    PrintDigitsInOrder(PrintReverseNumber(ReadPositiveNumber("Please enter a positive number?")));

    return 0;
}