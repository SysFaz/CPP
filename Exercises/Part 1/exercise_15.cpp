#include "iostream"

using namespace std;

int main()
{
    double first;
    double second;
    char operators;

    cout << "Provide the math expression : ";
    cin >> first >> operators >> second;

    switch (operators)
    {
    case '+':
        cout << first + second << endl;
        break;

    case '-':
        cout << first - second << endl;
        break;

    case '*':
        cout << first * second << endl;
        break;

    case '/':
        cout << first / second << endl;
        break;

    default:
        cout << "Invalid Operator. [+, -, *, /]";
    }

    return 0;
}