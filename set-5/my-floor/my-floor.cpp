

#include <iostream>
using namespace std;
float GetFraction(float number) {
    return (number - int(number));
}

int MyFloor(float Number) {
    if (Number >= 0)
        return int(Number);
    else
        return int(Number) - 1;
}


float ReadNumber() {
    float Number;
    cout << "Please enter a float number: ";
    cin >> Number;
    return Number;
}
int main()
{
    float number = ReadNumber();
    cout << MyFloor(number);

}

