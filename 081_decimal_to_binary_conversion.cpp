#include <iostream>
using namespace std;

int main() {
    int dec;
    cout << "Enter Decimal Number: ";
    cin >> dec;

    string binary = "";
    int n = dec;

    while(n > 0) {
        binary = char((n % 2) + '0') + binary;
        n /= 2;
    }

    cout << "Binary: " << binary << endl;

    return 0;
}
