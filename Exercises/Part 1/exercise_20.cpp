#include "iostream"

using namespace std;

int maxNumber(int first, int second)
{
    return (first > second) ? first : second;
}

int main()
{
    cout << "Large number is: " << maxNumber(3, 2) << endl;
    return 0;
}