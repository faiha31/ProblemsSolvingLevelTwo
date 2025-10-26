#include <iostream>   
#include <string>     
using namespace std;

/*Write a program that reads a number, 
then prints the frequency of every digit (from 0 to 9) in the input number.*/

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


int CountDigitFrequency(int Number, short DigitToCheck)
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
void PrintAllDigitsFrequency(int Number)
{
    short DigitFreq = 0;
    for (int i = 0; i <= 9; i++)
    {
        DigitFreq = CountDigitFrequency(Number, i);
        if (DigitFreq > 0)
            cout << "Digit " << i << " Frequency is " << DigitFreq << " Time(s)." << endl;

    }

}
int main()
{
    int Number = ReadPositiveNumber("Please enter the main number?");
    PrintAllDigitsFrequency(Number);

    return 0;
}