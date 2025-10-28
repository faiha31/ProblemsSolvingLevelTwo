

#include <iostream>
#include<string>
using namespace std;

/*Write a program to guess a 3-Letter Password (all capital).*/


string ReadPassword()
{
    string Pass;

        cout << "Please Enter a 3-Letter Password (All Capital) ?" << endl;
        cin >> Pass;
    
    return Pass;
}
bool GuessPassword(string OriginalPass)
{
    string Word = "";
    int Trial = 0;

    for (char i = 'A'; i <= 'Z'; i++)
    {
        for (char j = 'A'; j <= 'Z'; j++)
        {
            for (char h = 'A'; h <= 'Z'; h++)
            {
                Word = Word + i; 
                Word = Word + j;
                Word = Word + h;

                Trial++;

                cout <<"Trial "<< Trial <<" : " << Word << endl;

                if (Word == OriginalPass)
                {
                    cout << "\nPassword is " << OriginalPass << "\n";
                    cout << "Found after " << Trial << " Trial(s)";
                    return 1;

                }
                else
                    Word = "";

               
                
            }
        }

    }
    return 0;
}
int main()
{
     GuessPassword(ReadPassword());
}