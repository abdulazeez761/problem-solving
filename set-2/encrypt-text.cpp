#include <iostream>
#include <string>
using namespace std;

string ReadText()
{
    string Text;
    cout << "Please enter Text?\n";
    getline(cin, Text);
    return Text;
}
string enCrypt(string text, short key)
{
    string encrypterdText = "";
    for (int i = 0; i < text.length(); i++)
    {
        encrypterdText += char(text[i] + key);
    }
    return encrypterdText;
}
string deCrypt(string text, short key)
{
    string deCryptedText = "";
    for (int i = 0; i < text.length(); i++)
    {
        deCryptedText += char(text[i] - key);
    }
    return deCryptedText;
}
int main()
{
    const short EncryptionKey = 4;
    string Text = ReadText();
    string TextAfterEncryption = enCrypt(Text, EncryptionKey), TextAfterDecryption = deCrypt(TextAfterEncryption, EncryptionKey);
    cout << "\nText Before Encryption : ";
    cout << Text << endl;
    cout << "Text After Encryption  : ";
    cout << TextAfterEncryption << endl;
    cout << "Text After Decryption  : ";
    cout << TextAfterDecryption << endl;
    return 0;
}