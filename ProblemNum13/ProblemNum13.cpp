#include <iostream>   
#include <string>     
using namespace std;

/*Write a program to read a number and print the number pattern correctly,
where the digit's value determines its repetition in each increasing line
(e.g., Input 3 $\rightarrow$ 1, 22, 333).*/

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


void PrintCorrectlydNumberPattern(int Number)
{
    cout << endl;

    for (int i = 1; i <= Number; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}

int main()
{

    PrintCorrectlydNumberPattern(ReadPositiveNumber("Please enter a positive number ?"));
    return 0;
}