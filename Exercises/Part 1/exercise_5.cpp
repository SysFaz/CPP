#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const double pi = 3.1416;
    cout << "Radius = ";
    double radius;
    cin >> radius;
    double area = pi * pow(radius, 2);
    cout << "Area = " << area << endl;
    return 0;
}