
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
int reverseNumber(int number)
{
    int rebversedNumber = 0;
    while (number)
    {
        rebversedNumber = rebversedNumber * 10 + (number % 10);
        number = number / 10;
    }
    return rebversedNumber;
}

bool isPalindrom(int number)
{
    return number == reverseNumber(number);
}
void printResutl(bool isPalindrom)
{
    if (isPalindrom)
        cout << "yes it is! \n";
    else
        cout << "no it is not";
}
int main()
{
    printResutl(isPalindrom(ReadPositiveNumber("write a number pleas:")));
    return 0;
}