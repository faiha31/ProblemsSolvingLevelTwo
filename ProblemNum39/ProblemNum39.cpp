#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

/*Write a program to fill an array with max size 100 with random numbers from 1 to 100,
copy only prime numbers to another array using AddArrayElement, and print it.*/

enum enPrimNotPrime { Prime = 1, NotPrime = 2 };

int RandomNumber(int From, int To)
{
    int RandNum = rand() % (To - From + 1) + From;

    return RandNum;
}

void FillArrayWithRandomNumber(int arr[100], int& NumberOfElemnts)
{
    cout << "Enter Number Of Element ?" << endl;
    cin >> NumberOfElemnts;


    for (int i = 0; i < NumberOfElemnts; i++)
    {

        arr[i] = RandomNumber(1, 100);
    }

}

void PrintArray(int arr[100], int NumberOfElemnts)
{

    for (int i = 0; i < NumberOfElemnts; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

}
void AddArrayElement(int arr[100], int Number, int& NumberOfElemnts)
{
    NumberOfElemnts++;
    arr[NumberOfElemnts - 1] = Number;

}
enPrimNotPrime CheckPrime(int Number)
{
    int M = round(Number / 2);

    for (int Counter = 2; Counter <= M; Counter++)
    {
        if (Number % Counter == 0)
            return enPrimNotPrime::NotPrime;
    }

    return enPrimNotPrime::Prime;
}
void CopyArrayOnlyPrimeNumbers(int arrSource[100], int arrDestination[100], int SourceLength, int& DestinationLength)
{
    for (int i = 0; i < SourceLength; i++)
    {
        if (CheckPrime(arrSource[i]) == enPrimNotPrime::Prime)
            AddArrayElement(arrDestination, arrSource[i], DestinationLength);

    }

}

int main()
{
    srand((unsigned)time(NULL));

    int arr1[100], arr2[100], Arr1Length = 0, Arr2Length = 0;

    FillArrayWithRandomNumber(arr1, Arr1Length);

    CopyArrayOnlyPrimeNumbers(arr1, arr2, Arr1Length, Arr2Length);

    cout << "\nArray1 Elements : \n";
    PrintArray(arr1, Arr1Length);


    cout << endl << "Array2 Prime Numbers : \n";
    PrintArray(arr2, Arr2Length);



}