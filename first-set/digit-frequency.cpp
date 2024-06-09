#include <iostream>
using namespace std;

int readPositivInteger(string message)
{
    int Number = 0;
    do
    {
        cout << message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}
int CountDigitFrequency(short digitToCheck, int digits)
{
    int counter = 0;
    while (digits > 0)
    {
        digits % 10 == digitToCheck && ++counter;
        digits = digits / 10;
    }
    return counter;
}

int main()
{
    int number = readPositivInteger("pleas write the number");
    short digitToCheck = readPositivInteger("pleas write digit to check:");

    cout << "frequency of " << digitToCheck << " is: " << CountDigitFrequency(digitToCheck, number) << " times \n";

    return 0;
}