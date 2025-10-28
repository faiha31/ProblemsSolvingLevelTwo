

#include <iostream>
#include<string>
using namespace std;

/*Write a program to read a text and encrypt it, decrypt it.*/


string ReadText()
{
    string Text;

    cout << "Please Enter a text to encrypt it and decrypt it ?" << endl;
    getline(cin, Text);

    return Text;
}
string EncryptText(string Text,short EncriptionKey)
{
    for (int i = 0; i <= Text.length(); i++)
    {
        Text[i] = char((int)Text[i] + EncriptionKey);
    }
    return Text;
    
}
string DecryptText(string Text, short EncriptionKey)
{
    for (int i = 0; i <= Text.length(); i++)
    {
        Text[i] = char((int)Text[i] - EncriptionKey);
    }
    return Text;

}
int main()
{
    const short EncriptionKey = 2;
    string Text = ReadText();

    string EncryptionText = EncryptText(Text, EncriptionKey);
    string DeccryptionText = DecryptText(EncryptionText, EncriptionKey);

    cout << "\nText Before Encryption : " << Text << endl;
    cout << "Text After Encryption  : " << EncryptionText << endl;
    cout << "Text After Decryption  : " << DeccryptionText << endl;

}