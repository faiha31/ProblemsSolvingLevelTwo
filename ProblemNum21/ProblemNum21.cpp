
#include <iostream>
#include<cstdlib>
#include <ctime>

using namespace std;

/*Write a program to read how many keys to generate 
and print them on the screen.*/

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

enum enCharacterType { SmallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4 };

char GetRandomCharacter(enCharacterType CharacterType)
{
    switch (CharacterType)
    {
    case enCharacterType::SmallLetter:
        return char(RandomNumber(97, 122));
    case enCharacterType::CapitalLetter:
        return char(RandomNumber(65, 90));
    case enCharacterType::SpecialCharacter:
        return char(RandomNumber(33, 47));
    case enCharacterType::Digit:
        return RandomNumber(48, 57);
    }
}

string GeneratWord(enCharacterType CharacterType, short Length)

{
    string Word = {};

    for (int i = 1; i <= Length; i++)
    {
        Word = Word+GetRandomCharacter(CharacterType);
    }
    return Word;
}

string GeneratKey()
{
    string Key="";

    Key = GeneratWord(enCharacterType::CapitalLetter, 4) + "-";
    Key = Key + GeneratWord(enCharacterType::CapitalLetter, 4) + "-";
    Key = Key + GeneratWord(enCharacterType::CapitalLetter, 4) + "-";
    Key = Key + GeneratWord(enCharacterType::CapitalLetter, 4) ;

    return Key;
   
}
void GeneratKeys(short  NumberOfKey)
{
    for (int i = 1; i <= NumberOfKey; i++)
    {
        cout << "Key [" << i << "] :" << GeneratKey() << endl;
    }
    
}

int main()
{
    srand((unsigned)time(NULL));

    GeneratKeys(ReadPositiveNumber("Pleaes enter how many keys to generate? \n "));


}