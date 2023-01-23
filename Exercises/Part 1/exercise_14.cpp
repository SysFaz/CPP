#include "iostream"

using namespace std;

int main()
{
    int number1;
    int number2;
    int large;
    int small;

    cout << "Enter 2 numbers = ";
    cin >> number1 >> number2;

    large = (number1 > number2) ? number1 : number2;
    small = (number1 < number2) ? number1 : number2;

    //    if (number1 > number2) {
    //        large = number1;
    //        small = number2;
    //    }
    //
    //    else {
    //        large = number2;
    //        small = number1;
    //    }

    cout << "Large number is : " << large << endl;
    cout << "Small number is : " << small << endl;

    return 0;
}