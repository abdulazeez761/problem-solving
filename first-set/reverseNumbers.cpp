
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

void printDigits(int number)
{
    int reminder = 0;
    while (number > 0)
    {
        reminder = number % 10;
        number = number / 10;
        cout << reminder;
    }
}
int main()
{

    // printMultibecationTable();
    printDigits(readPositiveNumber("pleas write a number: "));
    return 0;
}