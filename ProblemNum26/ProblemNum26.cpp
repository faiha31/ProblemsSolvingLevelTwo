#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

/*Write a program to fill an array with random numbers (1-100), 
then print the sum of the numbers.*/

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
int SumElementInArray(int arr[100], int NumberOfElemnts)
{

    int Sum = 0;

    for (int i = 0; i < NumberOfElemnts; i++)
    {
        Sum += arr[i];
    }
    return Sum;
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100], NumberOfElemnts;

    FillArrayWithRandomNumber(arr, NumberOfElemnts);


    cout << "\nArray Elements : ";
    PrintArray(arr, NumberOfElemnts);

    cout << endl << "The Sum of all numbers is : " << SumElementInArray(arr, NumberOfElemnts);


}