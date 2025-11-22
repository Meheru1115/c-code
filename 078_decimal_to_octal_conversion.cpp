#include <iostream>
using namespace std;

int main() {
    int decimal;
    cout << "Enter decimal number: ";
    cin >> decimal;

    int octal = 0, base = 1;

    while (decimal > 0) {
        int rem = decimal % 8;
        octal += rem * base;
        base *= 10;
        decimal /= 8;
    }

    cout << "Octal = " << octal;
    return 0;
}
