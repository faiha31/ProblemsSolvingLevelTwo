#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

/*Write a program to fill an array with numbers, 
then print distinct numbers to another array.*/

void FillArray(int arr[100], int& arrLength)
{
    arrLength = 10;  

    arr[0] = 10;
    arr[1] = 10;
    arr[2] = 10;
    arr[3] = 50;
    arr[4] = 50;
    arr[5] = 70;
    arr[6] = 70;
    arr[7] = 70;
    arr[8] = 70;
    arr[9] = 90;
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
short FindNumberPositionInArray(int Number, int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        if (arr[i] == Number)
            return i;  
    }
    return -1;
}
bool IsNumberInArray(int Number, int arr[100], int arrLength)
{
    return FindNumberPositionInArray(Number, arr, arrLength) != -1;
}

void CopyDistinctNumbersToArray(int arrSource[100], int arrDestination[100], int SourceLength, int& DestinationLength)
{
    for (int i = 0; i < SourceLength; i++)
    {
        if (!IsNumberInArray(arrSource[i], arrDestination, DestinationLength))
            AddArrayElement(arrDestination, arrSource[i], DestinationLength);

    }

}

int main()
{
    srand((unsigned)time(NULL));

    int arr1[100], arr2[100], Arr1Length = 0, Arr2Length = 0;

    FillArray(arr1, Arr1Length);

    CopyDistinctNumbersToArray(arr1, arr2, Arr1Length, Arr2Length);

    cout << "\nArray1 Elements : \n";
    PrintArray(arr1, Arr1Length);


    cout << endl << "Array2 Distinct Numbers : \n";
    PrintArray(arr2, Arr2Length);



}