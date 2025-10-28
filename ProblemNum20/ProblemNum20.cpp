
#include <iostream>
#include<cstdlib>
#include <ctime>

using namespace std;

/*Write a program to print random Small Letter, Capital Letter,
Special Character, and Digit in order.*/

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
int main()
{
    srand((unsigned)time(NULL));

    cout << GetRandomCharacter(enCharacterType::SmallLetter) << endl;
    cout << GetRandomCharacter(enCharacterType::CapitalLetter) << endl;
    cout << GetRandomCharacter(enCharacterType::SpecialCharacter) << endl;
    cout << GetRandomCharacter(enCharacterType::Digit) << endl;



}
