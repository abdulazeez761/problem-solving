#include <iostream>
using namespace std;

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
void ReadArray(int array[], int arrayLength)
{
    for (int i = 1; i <= arrayLength; i++)
    {
        cout << "\nElelement[" << i << "]: ";
        cin >> array[i - 1];
    }
}
void printArra(int arr[], int arrayLength)
{
    for (int i = 0; i < arrayLength; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int checkNumber(int numberToCheck, int arr[], int arrayLength)
{
    int counter = 0;
    for (int i = 0; i < arrayLength; i++)
    {
        if (arr[i] == numberToCheck)
            counter++;
    }
    return counter;
}
void printResult(int numberToCheck, int arr[], int arrayLength)
{
    int timesRepeated = checkNumber(numberToCheck, arr, arrayLength);
    cout << "original arra: \n";
    printArra(arr, arrayLength);
    cout << numberToCheck << " is repeated " << timesRepeated << " times\n";
}
int main()
{

    int array[100] = {}, arrayLength = ReadPositiveNumber("Entrert Array Length: "), numberToCheck = 0;
    ReadArray(array, arrayLength);
    numberToCheck = ReadPositiveNumber("Entrert the number you want to check: ");
    printResult(numberToCheck, array, arrayLength);
    return 0;
}