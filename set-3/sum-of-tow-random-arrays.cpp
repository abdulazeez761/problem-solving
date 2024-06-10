#include <cmath>
#include <iostream>
using namespace std;
int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
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
void FillArrayWithRandomNumbers(int arr[100], int &arrLength)
{

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

void sumTwoArraysIntoThirdOne(int arr[], int arr2[], int arrSum[], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        arrSum[i] = arr[i] + arr2[i];
    }
}
int main()
{
    srand((unsigned)time(NULL));
    int arr[100], arr2[100], arrSum[100];
    int arrLength = ReadPositiveNumber("How many elements ?\n");
    FillArrayWithRandomNumbers(arr, arrLength);
    FillArrayWithRandomNumbers(arr2, arrLength);
    sumTwoArraysIntoThirdOne(arr, arr2, arrSum, arrLength);
    cout << "\nArray 1 elements:\n";
    PrintArray(arr, arrLength);
    cout << "\nArray 2 elements:\n";
    PrintArray(arr2, arrLength);
    cout << "\nSum of array1 and array2 elements:\n";
    PrintArray(arrSum, arrLength);
    return 0;
}