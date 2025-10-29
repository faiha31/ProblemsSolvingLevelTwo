#include <iostream>
#include <string>

using namespace std;

/*Write a program to read N elements and store them in an array, 
then print all array elements, and ask for a number to check,
then print how many times a certain element repeated in that array.*/

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

void ReadArray(int arr[100], int &NumberOfElemnts)
{
    cout << "Enter Number Of Element ?" << endl;
    cin >> NumberOfElemnts;

    cout << "Enter array elements : " << endl;
    
    for (int i = 0; i < NumberOfElemnts; i++)
    {
        cout << "Elemnts [" << i + 1 << "] : ";
        cin >> arr[i];
    }  

}
int TimesRepeated(int arr[100], int NumberOfElements,int NumberOfCheck)
{
    int Count=0;

    for (int i = 0; i < NumberOfElements; i++)
    {
  
        if (NumberOfCheck == arr[i])
            Count++;

    }
    return Count;
}
void PrintArray(int arr[100],int NumberOfElemnts)
{
    
    for (int i = 0; i < NumberOfElemnts; i++)
    {
        cout << arr[i]<<" ";
    }
    cout << endl;

}

int main()
{
    
    int arr[100], NumberOfElemnts, NumberOfCheck;

    ReadArray(arr, NumberOfElemnts);

    NumberOfCheck = ReadPositiveNumber("Enter the number you want to check :");

    cout << "\nOriginal array : ";
    PrintArray(arr, NumberOfElemnts);

    cout << "Number " << NumberOfCheck;
    cout << " is repeated :";
    cout << TimesRepeated(arr, NumberOfElemnts, NumberOfCheck)<<" time(s)";

   
}

