#include <iostream>
#include <limits>

using namespace std;

int main()
{
    cout << "Size of int = " << sizeof(int) << endl
         << "Min of int = " << numeric_limits<int>::min() << endl
         << "Max of int = " << numeric_limits<int>::max() << endl
         << "Size of double = " << sizeof(double) << endl
         << "Min of double = " << numeric_limits<double>::min() << endl
         << "Max of double = " << numeric_limits<double>::max() << endl
         << "Size of short = " << sizeof(short) << endl
         << "Min of short = " << numeric_limits<short>::min() << endl
         << "Max of short = " << numeric_limits<short>::max() << endl;
    return 0;
}