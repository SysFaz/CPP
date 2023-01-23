#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << setw(15) << left << "Courses" << right << setw(10) << "Students" << endl
         << setw(15) << left << "C++" << right << setw(10) << "100" << endl
         << setw(15) << left << "Javascript" << right << setw(10) << "50" << endl;
    return 0;
}