
# C++ Basics & Syntax

This is a project for me to capture my C++ learning walkthrough.




## First C++ Program.

```c++
#include <iostream>

int main()
{
    std::cout << "Hello World";

    return 0;
}
```
## Basics
```c++
#include <iostream>

using namespace std;

int main()
{
    // Declaring a Variable
    int variableName = 10;

    // Declaring a Cnstant
    const double pi = 3.14;

    // Mathematical Expressions
    int x = 10;
    double y = 3;
    int a = x + y;
    int b = x - y;
    int c = x * y;
    double d = x / y;

    // Writing to the Console
    cout << a << endl
         << b << endl
         << c << endl
         << d << endl;

    // Reading from the Console
    int z;
    cin >> x;

    return 0;
}
```
## Data Types
```c++
#include <iostream>
#include <limits>

using namespace std;

int main()
{
    // Data Types
    int number = 10;
    double pi = 3.14;
    float rate = 40.35F;
    long size = 3000000L;
    char letter = 'Z';
    string letters = "Names";
    bool isValid = true;
    auto interest = 30.99F;

    // Number System
    int normal = 255;
    int binary = 0b111111;
    int hexa = 0xFF;

    // Data Types size & limits
    int bytes = sizeof(int);
    int min = numeric_limits<int>::min();
    int max = numeric_limits<int>::max();

    // Arrays
    int numbers[] = {1, 5, 10};
    cout << numbers[0];

    // C Style Casting
    double a = 50.0;
    int b = (int)a;

    // C++ Style Casting
    int c = static_cast<int>(a);

    return 0;
}
```
## Decision Making
```c++
#include <iostream>

using namespace std;

int main()
{
    // Comparison Operators
    bool a = 100 > 99;
    bool b = 2 == 3;
    bool c = 100 != 5;

    // Logical Operators
    bool d = a && b;
    bool e = a || b;
    bool f = !a;

    int mark = 8000;

    if (mark <= 8000)
    {
        // ...
    }

    else if (mark < 50)
    {
        // ...
    }

    else
    {
        // ...
    }

    // Conditional Operator
    string result = (mark < 10'000) ? "Failed" : "Passed";

    switch (mark)
    {

    case 8000:
        // ...
        break;

    case 12'000:
        // ...
        break;

    default:
        // ...
    }

    return 0;
}
```
## Loops
```c++
#include <iostream>

using namespace std;

int main()
{
    // For Loop
    for (int i = 0; i < 5; i++)
    {
        cout << i << endl;
    }

    // While Loop
    int i = 0;
    while (i < 5)
    {
        cout << i << endl;
        i++;
    }

    // Do While Loop
    i = 0;
    do
    {
        cout << i << endl;
        i++;
    } while (i < 5);

    // Ranged bases For Loop
    int numbers[] = {1, 2, 3};
    for (int number : numbers)
    {
        cout << number << endl;
    }

    return 0;
}
```
## Functions
```c++
#include <iostream>

using namespace std;

// Defining Functions
void greet(string name)
{
    cout << "Hello" << name;
}

string fullName(string firtsName, string lastName)
{
    return firtsName + " " + lastName;
}

// Parameters with a default Value
double taxCalc(double income, double tax = .5)
{
    return income * tax;
}

// Overloading Functions
void greet(string titel, string name)
{
}

// Reference Parameters
void increase(double &number)
{
    number++;
}

// Function Declaration
void helloWorld(string world);

// Defining a namespace
namespace messaging
{
    void greet(string fullName)
    {
    }
}

// Using a namespace
using namespace messaging;

using messaging::greet;

int main()
{

    return 0;
}
```
## Appendix

Inspired from `Code With Mosh`

