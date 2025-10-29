#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

/*Write a program to fill an array with max size 100 with random numbers from 1 to 100,
then print the Max number.*/

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
int MaxElementInArray(int arr[100], int NumberOfElemnts)
{
    int Max = 0;

    for (int i = 0; i < NumberOfElemnts; i++)
    {
        if (arr[i] > Max)
        {
            Max = arr[i];
        }
    }
    return Max;
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100], NumberOfElemnts;

    FillArrayWithRandomNumber(arr, NumberOfElemnts);


    cout << "\nArray Elements : ";
    PrintArray(arr, NumberOfElemnts);

    cout <<endl<<"The Max number : "<< MaxElementInArray(arr, NumberOfElemnts);


}