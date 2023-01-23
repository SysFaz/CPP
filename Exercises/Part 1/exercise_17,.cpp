#include "iostream"

using namespace std;

int main()
{
    int temps[] = {27, 32, 38, 43, 49, 55};
    double total = 0;

    for (int temp : temps)
        total += temp;

    int count = sizeof(temps) / sizeof(int);
    double average = total / count;

    cout << average << endl;
    return 0;
}