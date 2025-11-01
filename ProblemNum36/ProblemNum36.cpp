#include <iostream>
#include <string>


using namespace std;

/*Write a program to dynamically read numbers and save them in an array.
Max size of array is 100, allocate semi-dynamic array length.*/

int ReadNumber()
{
    int Number = 0;
    cout << "Please enter a number " << endl;
    cin >> Number;
    
    return Number;
}


void AddArrayElement(int arr[100],int Number, int& NumberOfElemnts)
{
    NumberOfElemnts++;
	arr[NumberOfElemnts - 1] = Number;

}
void InputUserNumbersInArray(int arr[100],int& NumberOfElemnts)
{
	bool choice = true;
    do
    {
        AddArrayElement(arr, ReadNumber(), NumberOfElemnts);

        cout << "\nDo you want to add more numbers ? [1]:Yes, No:[0] ";
        cin >> choice;
		

	} while (choice);

}

void PrintArray(int arr[100], int NumberOfElemnts)
{

    for (int i = 0; i < NumberOfElemnts; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

}

int main()
{
    srand((unsigned)time(NULL));

    int arr1[100], NumberOfElemnts=0;

    InputUserNumbersInArray(arr1, NumberOfElemnts);



    cout << "\nArray  Length : "<< NumberOfElemnts<<endl;
	cout << "Array Elements are : " ;
    PrintArray(arr1, NumberOfElemnts);

    return 0;


}