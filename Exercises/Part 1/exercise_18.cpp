#include "iostream"

using namespace std;

int main()
{
    short secretNumber = 55;
    int guess = 0;
    int i = 0;
    while (guess != secretNumber)
    {
        cout << "Guess: ";
        cin >> guess;
    }
    return 0;
}