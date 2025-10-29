#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

/*Write a program to fill an array with max size 100 with random numbers from 1 to 100, 
then print the Minimum Number.*/

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
int MinElementInArray(int arr[100], int NumberOfElemnts)
{
    
    int Min = arr[0];

    for (int i = 1; i < NumberOfElemnts; i++)
    {
        if (arr[i] < Min)
        {
            Min = arr[i];
        }
    }
    return Min;
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100], NumberOfElemnts;

    FillArrayWithRandomNumber(arr, NumberOfElemnts);


    cout << "\nArray Elements : ";
    PrintArray(arr, NumberOfElemnts);

    cout << endl << "The Min number is : " << MinElementInArray(arr, NumberOfElemnts);


}