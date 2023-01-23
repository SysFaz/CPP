#include "iostream"

using namespace std;

int main()
{
    bool isUScitizen = true;
    bool hasBachelorDegree = false;
    short workExperience = 3;

    bool applicable = isUScitizen && (hasBachelorDegree || workExperience >= 2);

    cout << boolalpha << applicable << endl;

    return 0;
}