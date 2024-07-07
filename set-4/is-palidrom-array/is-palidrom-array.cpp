// is-palidrom-array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void FillArray(int arr[100], int& arrLength) {
    // Fill array with values: 10, 20, 30, 30, 20, 10
    arrLength = 6;
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 30;
    arr[4] = 20;
    arr[5] = 10;
}

void PrintArray(int arr[100], int arrLength) {
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
    cout << "\n";
}
bool IsPalindromeArray(int arr[100], int arrLength) {
    for (int i = 0; i < arrLength; i++) {
        if (arr[i] == arr[arrLength - i -1]) continue;
        return false;
    }
    return true;
}
    
  int main() 
    {
        int arr[100], Length = 0;

        FillArray(arr, Length);

        cout << "\nArray Elements:\n";
        PrintArray(arr, Length);

        if (IsPalindromeArray(arr, Length))
            cout << "\nYes, the array is a Palindrome\n";
        else
            cout << "\nNo, the array is NOT a Palindrome\n";
    return 0;
}

