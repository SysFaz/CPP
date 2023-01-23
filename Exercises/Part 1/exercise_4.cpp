#include <iostream>

using namespace std;

int main()
{
    cout << "Fahrenheit = ";
    double fahrenheit;
    cin >> fahrenheit;
    double celsius = (fahrenheit - 32) * 0.5;
    cout << "Celsius = " << celsius << endl;
    return 0;
}