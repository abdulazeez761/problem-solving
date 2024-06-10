#include <cmath>
#include <iostream>
using namespace std;
int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}
void FillArrayWithRandomNumbers(int arr[100], int &arrLength)
{
    cout << "\nEnter number of elements:\n";
    cin >> arrLength;
    for (int i = 0; i < arrLength; i++)
        arr[i] = RandomNumber(1, 100);
}
void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
    cout << "\n";
}
bool isPrime(int Number)
{
    int M = round(Number / 2);
    for (int Counter = 2; Counter <= M; Counter++)
    {
        if (Number % Counter == 0)
            return false;
    }
    return true;
}

void copyOnlyPrimeNumbers(int mainArr[], int arrayToCopy[], int arrLength, int &copyArrayLength)
{

    for (int i = 0; i < arrLength; i++)
    {
        if (isPrime(mainArr[i]))
        {

            arrayToCopy[copyArrayLength] = mainArr[i];
            copyArrayLength++;
        }
    }
}
int main()
{
    srand((unsigned)time(NULL));
    int arr[100], primeArray[100], arrLength, copyArrayLength = 0;
    FillArrayWithRandomNumbers(arr, arrLength);
    cout << "\nmain array Elements: ";
    PrintArray(arr, arrLength);
    copyOnlyPrimeNumbers(arr, primeArray, arrLength, copyArrayLength);
    cout << "\nprime numbers : ";
    PrintArray(primeArray, copyArrayLength);
    return 0;
}