#include <iostream>
#include <cmath>
using namespace std;

int main() {
    string hex;
    cout << "Enter hex number: ";
    cin >> hex;

    int decimal = stoi(hex, 0, 16);

    cout << "Decimal = " << decimal;
    return 0;
}
