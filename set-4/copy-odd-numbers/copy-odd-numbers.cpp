
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int RandomNumber(int From, int To) {
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}
void FillArrayWithRandomNumbers(int arr[100], int arrLength) {
    for (int i = 0; i < arrLength; i++)
        arr[i] = RandomNumber(1 , 100);
}
int ReadPositiveNumber(string Message) {
    int Number = 0;
    do {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}
void AddElementToArray(int Number, int arr[100], int& length) {
    arr[length] = Number;
    length++;
}
void CopyOddElements(int arrSource[100], int length, int arrDestination[100], int &destinationLength) {
    for (int i = 0; i < length; i++) {
        if(arrSource[i] % 2 ==0)AddElementToArray(arrSource[i], arrDestination, destinationLength);
    }
}
void PrintArray(int arr[100], int arrLength) {
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
    cout << "\n";
}
int main()
{
    srand((unsigned)time(NULL));

    int arr[100] , arr2[100], arr2Length =0;
    int arrLength = ReadPositiveNumber("\nEnter number of elements : \n");
    FillArrayWithRandomNumbers(arr, arrLength);
    CopyOddElements(arr, arrLength, arr2, arr2Length);
    cout << "array 1 \n";
    PrintArray(arr, arrLength);
    cout << "array 2 \n";
    PrintArray(arr2, arr2Length);
    return 0;
}

