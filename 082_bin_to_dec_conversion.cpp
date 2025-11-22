#include <iostream>
#include <cmath>
using namespace std;

int main() {
    string bin;
    cout << "Enter Binary Number: ";
    cin >> bin;

    int decimal = 0;
    int power = 0;

    for(int i = bin.length() - 1; i >= 0; i--) {
        if(bin[i] == '1') {
            decimal += pow(2, power);
        }
        power++;
    }

    cout << "Decimal: " << decimal << endl;

    return 0;
}
