#include <iostream>
#include <string>


using namespace std;

/*Write a program to fill an array with ordered numbers from 1 to N, then print it, 
after that shuffle this array and print it after shuffle.*/

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
void Swap(int& A, int& B)
{
    int Temp;    
    Temp = A;    
    A = B;       
    B = Temp;    
}

int RandomNumber(int From, int To)
{
    int RandNum = rand() % (To - From + 1) + From;

    return RandNum;
}
void FillArrayWithOrderNumberFrom1ToN(int arr[100], int& NumberOfElemnts)
{
    for (int i = 0; i < NumberOfElemnts; i++)
    {

        arr[i] = i+1;
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
void shuffleArray(int arr[100], int NumberOfElemnts)
{
    for (int i = 0; i < NumberOfElemnts; i++)
    {
        int Index1 = RandomNumber(1, NumberOfElemnts) -1;
        int Index2 = RandomNumber(1, NumberOfElemnts) -1 ;
           
        Swap(arr[Index1],arr[Index2]);
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int arr1[100], arrSum[100], NumberOfElemnts;

    NumberOfElemnts = ReadPositiveNumber("Enter Number Of Element ? ");

    FillArrayWithOrderNumberFrom1ToN(arr1, NumberOfElemnts);


    cout << "\nArray elements befor shuffle : \n";
    PrintArray(arr1, NumberOfElemnts);

    shuffleArray(arr1, NumberOfElemnts);

    cout << endl << "Array elements after shuffle : \n";
    PrintArray(arr1, NumberOfElemnts);

    



}