#include <iostream>
using namespace std;

int readNumber(string message)
{
    int number = 0;
    do
    {
        cout << message << endl;
        cin >> number;
    } while (number <= 0);
    return number;
}
bool isPerfectNumber(int number)
{
    int sum = 0;
    for (int i = 1; i < number; i++)
    {
        if (number % i == 0)
            sum += i;
    }
    return sum == number;
}
void printPerfectNumber(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (isPerfectNumber(i))
            cout << i << endl;
    }
}
int main()
{

    printPerfectNumber(readNumber("pleas set a number:"));

    return 0;
}