
#include <iostream>
using namespace std;

int ReadPositiveNumber(string message)
{
    int number = 0;
    do
    {
        cout << message << endl;
        cin >> number;
    } while (number <= 0);
    return number;
}

// void PrintInvertedLetterPattern(int number)
// {
//     for (int i = number; i >= 1; i--)
//     {

//         for (int j = 1; j <= i; j++)
//         {
//             cout << char(i + 64);
//         }
//         cout << endl;
//     }
// }
void PrintLetterPattern(int number)
{
    for (int i = 1; i <= number; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << char(i + 64);
        }
        cout << endl;
    }
}
int main()
{
    // PrintInvertedLetterPattern(ReadPositiveNumber("enter a number"));
    PrintLetterPattern(ReadPositiveNumber("enter a number"));
    return 0;
}