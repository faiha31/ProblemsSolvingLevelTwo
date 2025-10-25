#include <iostream>
#include<string>
using namespace std;

/*Write a program to print all Perfect Numbers from 1 up to the input number.*/

float ReadPositiveNumber(string Message)
{
    int Number = 0;
    do {
        cout << Message << endl;
        cin >> Number;

    } while (Number <= 0);

    return Number;

}


bool IsPerfectNumber(int Number)
{
    float sum = 0;

    for (int i = 1; i < Number; i++)
    {
        if (Number % i == 0)
            sum += i;

    }
    return Number == sum;

}
void PrintPerfectNumberFrom1ToN(int Number)
{
    for (int i = 1; i < Number; i++) 
    {
        if (IsPerfectNumber(i))
            cout << i << endl;
    }
    

}
int main()
{

    PrintPerfectNumberFrom1ToN(ReadPositiveNumber("Please enter a positive number ?"));
}