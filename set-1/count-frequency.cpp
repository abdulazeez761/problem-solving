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

void PrintAllDigitsFrequencey(int digits)
{
    cout << endl;
    for (int i = 0; i < 10; i++)
    {
        int digitFrequncy = 0;
        digitFrequncy = CountDigitFrequency(i, digits);

        digitFrequncy > 0 && cout << "digit: " << i << " has been reapeated: " << digitFrequncy << " times\n";
    }
}
int main()
{
    int number = readPositivInteger("pleas write the number");
    // short digitToCheck = readPositivInteger("pleas write digit to check:");

    PrintAllDigitsFrequencey(number);

    return 0;
}