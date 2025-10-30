#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

/*Write a program to fill an array with max size 100 with random numbers from 1 to 100, 
copy only prime numbers to another array, and print it..*/

enum enPrimeNotPrime {Prime=1,NotPrime=2};

enPrimeNotPrime CheckPrime(int Number)
{
    
    int M = round(Number / 2);

   
    for (int Counter = 2; Counter <= M; Counter++)
    {
      
        if (Number % Counter == 0)
            return enPrimeNotPrime::NotPrime;
    }

    return enPrimeNotPrime::Prime;
}

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
void CopyArray(int arrSource[100], int arrDestinatio[100], int NumberOfElemnts)
{
    for (int i = 0; i < NumberOfElemnts; i++)
    {
        arrDestinatio[i] = arrSource[i];

    }

}
void CopyOnlyPrimeNumbers(int arrSource[100], int arrDestinatio[100], int Arr1Length,int &Arr2Length)
{
    int Count = 0;
    for (int i = 0; i < Arr1Length; i++)
    {
        if (CheckPrime(arrSource[i]) == enPrimeNotPrime::Prime)
        {
            arrDestinatio[Count] = arrSource[i];
            Count++;
        }
            
    }
     Arr2Length = --Count;
}
int main()
{
    srand((unsigned)time(NULL));

    int arr1[100], arr2[100], Arr1Length=0, Arr2Length=0;

    FillArrayWithRandomNumber(arr1, Arr1Length);

    CopyOnlyPrimeNumbers(arr1, arr2, Arr1Length, Arr2Length);

    cout << "\nArray1 Elements : \n";
    PrintArray(arr1, Arr1Length);

    cout << "\nPrime Number in Array2 : \n";
    PrintArray(arr2, Arr2Length);



}