#include <iostream>
#include <string>


using namespace std;

/*Write a program to fill an array with max size 100 with random numbers from 1 to 100,
copy it to another array in reverse order, and print it.*/

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

        arr[i] = RandomNumber(1,100);
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
void ReverseOrderArray(int arrSource[100],int arrDestination[100], int NumberOfElemnts)
{
    for (int i = 0; i < NumberOfElemnts; i++)
    {
		arrDestination[i] = arrSource[NumberOfElemnts - 1 - i];
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int arr1[100], arrReverse[100], NumberOfElemnts;

    NumberOfElemnts = ReadPositiveNumber("Enter Number Of Element ? ");

    FillArrayWithRandomNumber(arr1, NumberOfElemnts);


    cout << "\nArray 1 elements  : \n";
    PrintArray(arr1, NumberOfElemnts);

    ReverseOrderArray(arr1,arrReverse, NumberOfElemnts);

    cout << endl << "Array 2 elements after coping Array 1 in Reversed Order : \n";
    PrintArray(arrReverse, NumberOfElemnts);





}