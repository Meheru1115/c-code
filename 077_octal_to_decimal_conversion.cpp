#include <iostream>
using namespace std;

int main() {
    int octal;
    cout << "Enter octal number: ";
    cin >> octal;

    int decimal = 0, base = 1;

    while (octal > 0) {
        int last = octal % 10;
        decimal += last * base;
        base *= 8;
        octal /= 10;
    }

    cout << "Decimal = " << decimal;
    return 0;
}
