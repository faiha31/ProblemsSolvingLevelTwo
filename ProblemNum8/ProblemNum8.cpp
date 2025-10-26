#include <iostream>   
#include <string>     
using namespace std;

/*Write a program that reads a number and a single digit, 
then prints the frequency (count) of that specific digit in the main number.*/

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


int CountDigitFrequency(int Number,short DigitToCheck)
{
    int FreqCount = 0, Remainder = 0;
    while (Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;
        
        if (Remainder == DigitToCheck)
            FreqCount++;
    }
    return FreqCount;
}

int main()
{
    int Number = ReadPositiveNumber("Please enter the main number?");
    short DigitToCheck = ReadPositiveNumber("Please enter one digit to check?");

    cout<<"Digit " << DigitToCheck << " Frequency is "<< CountDigitFrequency(Number, DigitToCheck)<<" Time(s)."<<endl;

    return 0;
}