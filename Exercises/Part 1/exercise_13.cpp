#include "iostream"

using namespace std;

int main()
{
    int sales = 17000;
    float commission;
    short commissionGet;

    if (sales <= 10'000)
    {
        commission = 0.1;
        commissionGet = sales * commission;
    }

    else if (sales <= 15'000)
    {
        commission = 0.15;
        commissionGet = sales * commission;
    }

    else
    {
        commission = 0.2;
        commissionGet = sales * commission;
    }

    cout << "Your commission is = " << commissionGet << endl;

    return 0;
}