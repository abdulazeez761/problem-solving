
#include <iostream>
using namespace std;
int readPositiveNumber(string message)
{
    int number = 0;
    do
    {
        cout << message << endl;
        cin >> number;
    } while (number <= 0);
    return number;
}
int reverseDigit(int number)
{
    int reminder = 0, newNumber = 0;
    while (number > 0)
    {
        reminder = number % 10;
        number = number / 10;
        newNumber = newNumber * 10 + reminder;
    }
    return newNumber;
}
void printDigits(int number)
{
    int reminder = 0;
    while (number > 0)
    {
        reminder = number % 10;
        number = number / 10;
        cout << reminder << endl;
    }
}
int main()
{

    printDigits(reverseDigit(readPositiveNumber("pleas write a number: ")));
    return 0;
}