#include <iostream>

using namespace std;

int main()
{
    string names[3];

    cout << "First Name = ";
    getline(cin, names[0]);

    cout << "Second Name = ";
    getline(cin, names[1]);

    cout << "Third Name = ";
    getline(cin, names[2]);

    cout << endl
         << "First Name = " << names[0] << endl;

    return 0;
}