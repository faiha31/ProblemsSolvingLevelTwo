#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

/*Write a program to fill an array with numbers, then check if it is a Palindrome array or not.
Note:Palindrome array can be read the same from right to left and from left to right.*/

void FillArray(int arr[100], int& arrLength)
{
    arrLength = 6;

    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 30;
    arr[4] = 20;
    arr[5] = 10;
   
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
bool IsPalindromeArray(int arr[100], int Length)
{

    for (int i = 0; i < Length; i++)
    {
        if (arr[i] != arr[Length-i-1])
			return false;
    }
	return true;
}


int main()
{
    srand((unsigned)time(NULL));

    int arr1[100], Arr1Length = 0;

    FillArray(arr1, Arr1Length);

    cout << "\nArray1 Elements : \n";
    PrintArray(arr1, Arr1Length);

    if (IsPalindromeArray(arr1, Arr1Length))
        cout << "\nYes, The Array Is Palindrome \n";
    else
        cout << "\nNo, The Array Is Not Palindrome \n";
  

    





}