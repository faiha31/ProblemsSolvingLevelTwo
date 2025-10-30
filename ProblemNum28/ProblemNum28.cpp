#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

/*Write a program to fill an array with max size 100 with random numbers from 1 to 100,
copy it to another array, and print it.*/

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

int main()
{
    srand((unsigned)time(NULL));

    int arr1[100], arr2[100], NumberOfElemnts;

    FillArrayWithRandomNumber(arr1, NumberOfElemnts);

    CopyArray(arr1, arr2, NumberOfElemnts);

    cout << "\nArray1 Elements : \n";
    PrintArray(arr1, NumberOfElemnts);


    cout << endl << "Array2 Elements After Copy : \n";
    PrintArray(arr2, NumberOfElemnts);



}