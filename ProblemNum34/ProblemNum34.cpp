#include <iostream>
#include <string>


using namespace std;

/*Write a program to fill an array with random numbers, read a number, and return its index. 
If the number is not found, return the value -1.*/

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
short FindNumberPositionInArray(int arr[100], int SearchNumber, int NumberOfElemnts)
{

    for (int i = 0; i < NumberOfElemnts; i++)
    {
        if (arr[i] == SearchNumber) 
            return i;
    }
	return -1;

}

int main()
{
    srand((unsigned)time(NULL));

    int arr1[100], NumberOfElemnts ,Number;

    NumberOfElemnts = ReadPositiveNumber("Enter Number Of Element ? ");

    FillArrayWithRandomNumber(arr1, NumberOfElemnts);


    cout << "\nArray 1 elements  : \n";
    PrintArray(arr1, NumberOfElemnts);

    Number = ReadPositiveNumber("\n\nPlease enter a number to search for  ? ");
    cout << "\nNumber you are looking for is: " << Number << endl;


    short NumberPosition = FindNumberPositionInArray(arr1, Number, NumberOfElemnts);

    if (NumberPosition == -1)
    {
        cout << "The number is not founf :-( " << endl;
    }
    else
    {
        cout << "The number found at index : " << NumberPosition << endl;
        cout << "The number found its order : " << NumberPosition + 1 << endl;
    }
       

}