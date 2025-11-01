#include <iostream>
#include <string>


using namespace std;

/*Write a program to read how many keys to generate and fill them in an array
then print them on the screen.*/

enum enCharType {
    SamallLetter = 1,    
    CapitalLetter = 2,   
    SpecialCharacter = 3,
    Digit = 4            
};

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
char GetRandomCharacter(enCharType CharType)
{
    switch (CharType)
    {
    case enCharType::SamallLetter:
    {
        return char(RandomNumber(97, 122));
        break;
    }
    case enCharType::CapitalLetter:
    {
        return char(RandomNumber(65, 90));
        break;
    }
    case enCharType::SpecialCharacter:
    {
        return char(RandomNumber(33, 47));
        break;
    }
    case enCharType::Digit:
    {
        return char(RandomNumber(48, 57));
        break;
    }
    }
    return '\0';
}
string GenerateWord(enCharType CharType, short Length)
{
    string Word;  
    for (int i = 1; i <= Length; i++)
    {
        Word = Word + GetRandomCharacter(CharType);
    }
    return Word;
}
string GenerateKey()
{
    string Key = "";
    Key = GenerateWord(enCharType::CapitalLetter, 4) + "-";
    Key = Key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
    Key = Key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
    Key = Key + GenerateWord(enCharType::CapitalLetter, 4);
    return Key;
}
void FillArrayWithKeysRandom(string arr[100], int& NumberOfElemnts)
{
    for (int i = 0; i < NumberOfElemnts; i++)
    {

        arr[i] = GenerateKey();
    }

}

void PrintArray(string arr[100], int NumberOfElemnts)
{

    for (int i = 0; i < NumberOfElemnts; i++)
    {
        cout << "Array [ " << i << " ] :" << arr[i] << endl;
    }
    cout << endl;

}


int main()
{
    srand((unsigned)time(NULL));

    string arr1[100];
    int NumberOfElemnts = 0;

    NumberOfElemnts = ReadPositiveNumber("How many keys do you want to generate?\n ");

    FillArrayWithKeysRandom(arr1,NumberOfElemnts);


    cout << "\nArray elements  : \n";
    PrintArray(arr1, NumberOfElemnts);


 





}