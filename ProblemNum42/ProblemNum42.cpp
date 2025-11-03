#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

/*Write a program to fill an array with max size 100 with random numbers from 1 to 100,
then print the count of Odd numbers.*/


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
int CountOddNumbersInArrayElement(int arr[100], int& NumberOfElemnts)
{
	int Count = 0;

    for (int i = 0; i < NumberOfElemnts; i++)
    {
        if (arr[i] % 2 != 0)
            Count++;
    }
	return Count;
}



int main()
{
    srand((unsigned)time(NULL));

    int arr1[100], Arr1Length = 0;

    FillArrayWithRandomNumber(arr1, Arr1Length);


    cout << "\nArray1 Elements : \n";
    PrintArray(arr1, Arr1Length);

	
	cout << endl << "Array1 Odd Numbers Count is : " 
         << CountOddNumbersInArrayElement(arr1, Arr1Length) << endl;
    



}