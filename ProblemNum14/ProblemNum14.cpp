#include <iostream>   
#include <string>     
using namespace std;

/*Write a program to read a number and print an inverted character pattern, 
starting from the character corresponding to the number, decreasingly down to 'A'*/

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


void PrintInvertedCharacterPattern(int Number)
{
    cout << endl;

    for (int i = Number; i >= 1; i--)
    {
        for (int j = (i + 64); j >= 65; j--)
        {
            cout << char(i + 64);
        }
        cout << endl;
    }
}

int main()
{

    PrintInvertedCharacterPattern(ReadPositiveNumber("Please enter a positive number ?"));
    return 0;
}