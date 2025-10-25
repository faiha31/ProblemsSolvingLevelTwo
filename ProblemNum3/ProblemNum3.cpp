#include <iostream>
#include<string>
using namespace std;

/*Write a program to check if a number is a Perfect Number or not.
(Note: A Perfect Number is equal to the sum of all its proper positive divisors.)*/

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
    return Number==sum;

}
void PrintPerfectNumberOrNot(int Number)
{
    if (IsPerfectNumber)
        cout << Number << " Is Perfect Number ." << endl;
    else
        cout << Number << " Is Not Perfect Number ." << endl;

}
int main()
{
   
  PrintPerfectNumberOrNot(ReadPositiveNumber("Please enter a positive number ?"));
}
