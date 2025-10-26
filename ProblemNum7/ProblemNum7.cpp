#include <iostream>   
#include <string>     
using namespace std;

/*Write a program to read a number and print it in reverse order
(i.e., printing each digit on a separate line).*/

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
    return ReverseNumber ;
}

int main()
{
    cout << "Reverse is " <<
        PrintReverseNumber(ReadPositiveNumber("Please enter a positive number?")) << endl;

    return 0;
}