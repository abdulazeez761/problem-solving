
#include <iostream>
using namespace std;

void printAllWords()
{
    for (int i = 1; i <= 26; i++)
    {

        for (int j = 1; j <= 26; j++)
        {

            for (int d = 1; d <= 26; d++)
            {
                cout << char(i + 64) << char(j + 64) << char(d + 64);
                cout << endl;
            }
        }
    }
}
int main()
{
    printAllWords();
    return 0;
}