#include <iostream>
#include <cstdlib>
using namespace std;

enum enCharType
{
    SamallLetter = 1,
    CapitalLetter = 2,
    SpecialCharacter = 3,
    Digit = 4
};

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

char GetRandomCharacter(enCharType CharType)
{
    switch (CharType)
    {
    case enCharType::SamallLetter:
        return char(RandomNumber(97, 122));
        break;
    case enCharType::CapitalLetter:
        return char(RandomNumber(65, 90));
        break;
    case enCharType::SpecialCharacter:
        return char(RandomNumber(33, 47));
        break;
    case enCharType::Digit:
        return char(RandomNumber(48, 57));
        break;

    default:
        break;
    }
}

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
string GenerateKeyParts(enCharType CharType, short length)
{
    string word = "";
    for (int i = 0; i < length; i++)
    {
        word += GetRandomCharacter(CharType);
    }
    return word;
}
string GenerateKey()
{
    string key = "";
    key += GenerateKeyParts(enCharType::CapitalLetter, 4) + "-";
    key += GenerateKeyParts(enCharType::CapitalLetter, 4) + "-";
    key += GenerateKeyParts(enCharType::CapitalLetter, 4) + "-";
    key += GenerateKeyParts(enCharType::CapitalLetter, 4);
    return key;
}
void GenerateKeys(short numberOfKeys)
{
    for (int i = 1; i <= numberOfKeys; i++)
    {
        cout << "[" << i << "] : ";
        cout << GenerateKey() << endl;
    }
}
int main()
{
    srand((unsigned)time(NULL));

    GenerateKeys(ReadPositiveNumber("set a number of keys: "));
    return 0;
}