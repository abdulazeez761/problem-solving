

#include <iostream>
using namespace std;
float GetFraction(float number) {
    return (number - int(number) );
}

int MyRound(float number) {
    
    int intPart = int(number);
    float fraction = GetFraction(number);
  
    if (fraction >= .5) return ++intPart;
    return intPart;
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
    cout << MyRound(number);

}

