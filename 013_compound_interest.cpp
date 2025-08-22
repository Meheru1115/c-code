#include <iostream>
#include <cmath> // For pow() function
using namespace std;

int main() {
    double principal, rate, time, compoundInterest;
    int n; // Number of times interest applied per year

    // Input from user
    cout << "Enter principal amount: ";
    cin >> principal;
    cout << "Enter annual interest rate (in %): ";
    cin >> rate;
    cout << "Enter time in years: ";
    cin >> time;
    cout << "Enter number of times interest compounded per year: ";
    cin >> n;

    // Formula: A = P * (1 + r/n)^(n*t)
    compoundInterest = principal * pow(1 + (rate / 100) / n, n * time);

    cout << "Compound Interest after " << time << " years is: "
         << compoundInterest << endl;

    return 0;
}
