#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

/*Write a program to fill two arrays with max size 100 with random numbers from 1 to 100, 
sum their elements in a third array, and print the results.*/

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
int RandomNumber(int From, int To)
{
    int RandNum = rand() % (To - From + 1) + From;

    return RandNum;
}

void FillArrayWithRandomNumber(int arr[100], int& NumberOfElemnts)
{
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
void Sum2Array(int arr1[100], int arr2[100], int arrSum[100], int NumberOfElemnts)
{

    for (int i = 0; i < NumberOfElemnts; i++)
    {
        arrSum[i] = arr1[i]+arr2[i];

    }

}

int main()
{
    srand((unsigned)time(NULL));

    int arr1[100], arr2[100], arrSum[100], NumberOfElemnts;

    NumberOfElemnts=ReadPositiveNumber("Enter Number Of Element ? ");

    FillArrayWithRandomNumber(arr1, NumberOfElemnts);
    FillArrayWithRandomNumber(arr2, NumberOfElemnts);

    Sum2Array(arr1, arr2, arrSum, NumberOfElemnts);

    cout << "\nArray1 Elements : \n";
    PrintArray(arr1, NumberOfElemnts);


    cout << endl << "Array2 Elements  : \n";
    PrintArray(arr2, NumberOfElemnts);

    cout << endl << "Sum of Array1 and Array2 elements : \n";
    PrintArray(arrSum, NumberOfElemnts);



}