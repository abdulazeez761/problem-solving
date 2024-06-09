
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

void printInvertedNumberPattern(int number)
{
    for (int i = number; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}
int main()
{
    printInvertedNumberPattern(ReadPositiveNumber("enter a number"));
    return 0;
}