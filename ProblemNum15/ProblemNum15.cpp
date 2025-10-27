#include <iostream>   
#include <string>     
using namespace std;

/*Write a program to read a number and print the character pattern correctly, 
starting from 'A' increasingly up to the character corresponding to the number.*/

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


void PrintCorrectlyCharacterPattern(int Number)
{
    cout << endl;

    for (int i = 1; i <= Number; i++)
    {
        for (int j = 65; j <= (i + 64); j++)
        {
            cout << char(i + 64);
        }
        cout << endl;
    }
}

int main()
{

    PrintCorrectlyCharacterPattern(ReadPositiveNumber("Please enter a positive number ?"));
    return 0;
}