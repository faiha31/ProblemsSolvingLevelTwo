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


void PrintDigits(int Number)
{
    int Sum = 0, Remainder = 0; 
    while (Number > 0)
    {
        Remainder = Number % 10; 
        Number = Number / 10;    
        cout << Remainder << endl;
    }
}

int main()
{
    PrintDigits(ReadPositiveNumber("Please enter a positive number?"));

    return 0;  
}
