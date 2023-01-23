#include <iostream>

using namespace std;

int main()
{
    double totalSales = 95000;
    const double stateTax = 0.04;
    const double countyTax = 0.02;
    double stateTaxToPay = totalSales * stateTax;
    double countyTaxToPay = totalSales * countyTax;
    double totalTax = stateTaxToPay + countyTaxToPay;

    cout << "Total Sales = $" << totalSales << endl
         << "State Tax = $" << stateTaxToPay << endl
         << "County Tax = $" << countyTaxToPay << endl
         << "Total Tax = $" << totalTax << endl;
    return 0;
}