

#include <iostream>
using namespace std;

/*Write a program to print all words from AAA - AAB.. to ZZZ.*/


void PrintAllWordsFromAAAToZZZ()
{
    for (char i = 'A'; i <= 'Z'; i++)
    {
        for (char j = 'A'; j <= 'Z'; j++)
        {
            for (char h = 'A'; h <= 'Z'; h++)
            {
                cout << i<<j<<h << endl;
            }
        }

    }

}
int main()
{
    PrintAllWordsFromAAAToZZZ();
}
