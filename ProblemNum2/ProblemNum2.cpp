
#include <iostream>
#include <string>
#include <Cmath>
using namespace std;

/*Write a program to read a number, and 
print the prime numbers from 1 up to the input number.*/

enum enPrimeNotPrime { Prime = 1, NotPrime = 2 };

float ReadPositiveNumber(string Message)
{
    int Number = 0;
    do {
        cout << Message << endl;
        cin >> Number;

    } while (Number <= 0);

    return Number;

}

enPrimeNotPrime checkPrimeNumber(int Number)
{
    int M = round(Number / 2);

    for (int i = 2; i <= M; i++)
    {
        if (Number % i == 0)
            return  enPrimeNotPrime::NotPrime;
    }

    return enPrimeNotPrime::Prime;
}


void PrintPrimeNumberFrom1ToN(int Number)
{
    cout << "\n" << "The prime numbers from 1 to " << Number << " are : " << endl;
    for (int i = 1; i <= Number; i++)
    {
        if (checkPrimeNumber(i) == enPrimeNotPrime::Prime)
            cout << i << endl;
        
    }
    

}

int main()
{

    PrintPrimeNumberFrom1ToN(ReadPositiveNumber("Please enter a positive number ?"));
}
