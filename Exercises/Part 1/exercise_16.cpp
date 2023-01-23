#include "iostream"

using namespace std;

int main()
{
    int number;
    int factorial = 1;
    cout << "A positive number = ";
    cin >> number;
    if (number < 0)
    {
        cout << "This is not a positive number.";
    }

    else
    {
        for (int i = 1; i <= number; i++)
        {
            factorial *= i;
        }
        cout << "Factorial of " << number << " : " << factorial << endl;
    }
    return 0;
}