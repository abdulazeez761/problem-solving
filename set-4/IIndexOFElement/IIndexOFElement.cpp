#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void ReadPositiveNumber(string Message, int& arrLength) {
    do {
        cout << Message << endl;
        cin >> arrLength;
    } while (arrLength <= 0);
}

int RandomNumber(int From, int To) {
    int randomNumber = rand() % (To - From + 1) + From;
    return randomNumber;
}

void FillArrayWithRandomNumber(int arr[], int arrLength) {
    for (int i = 0; i < arrLength; i++) {
        arr[i] = RandomNumber(1, 100);
    }
}
void PrintArray(int arr[100], int arrLength) {
    for (int i = 0; i < arrLength; i++) { 
        cout << arr[i] << " ";   
        cout << "\n";
    }
}
short FindIndedxOfElement(int arr[100] , int numberToFInd , int arrLength) {
    for (int i = 0; i < arrLength; i++) {
        if (arr[i] == numberToFInd) return i;
    }
    return -1;
}

int ReadNumber() {
    int Number; 
    cout << "\nPlease enter a number to search for?\n";     
    cin >> Number;
    return Number;
}
int main() {
    int arr[100], arrLength;
    srand((unsigned)time(NULL));

    ReadPositiveNumber("Enter number of elements:", arrLength);
    FillArrayWithRandomNumber(arr, arrLength);
    PrintArray(arr, arrLength);

    int numberToSearch = ReadNumber();
    cout << FindIndedxOfElement(arr, numberToSearch, arrLength);

    return 0;
}
