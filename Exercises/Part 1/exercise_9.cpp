#include <iostream>

using namespace std;

int main()
{
    cout << "Street = ";
    string street;
    getline(cin, street);

    cout << "City = ";
    string city;
    getline(cin, city);

    cout << "State = ";
    string state;
    getline(cin, state);

    cout << "Zip Code = ";
    short zipCode;
    cin >> zipCode;

    cout << endl
         << street << endl
         << city << ", " << state << ", " << zipCode << endl;

    return 0;
}