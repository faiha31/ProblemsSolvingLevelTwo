#include <iostream>   
#include <string>     
using namespace std;

/*Write a program to read a number and print an inverted number pattern, 
where the digit's value determines its repetition in each decreasing line
(e.g., Input 3 $\rightarrow$ 333, 22, 1).*/

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


void PrintInvertedNumberPattern(int Number)
{
    cout << endl;

    for (int i = Number; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            cout << i;
        }
        cout << endl;
    }
}

int main()
{

    PrintInvertedNumberPattern(ReadPositiveNumber("Please enter a positive number ?"));
    return 0;
}