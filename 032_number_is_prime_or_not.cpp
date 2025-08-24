#include <iostream>
using namespace std;

int main() {
    int num, i;
    cout << "Enter a number: ";
    cin >> num;

    if (num <= 1) {
        cout << num << " is Not a Prime number.";
        return 0;
    }

    for (i = 2; i < num; i++) {
        if (num % i == 0) {
            cout << num << " is Not a Prime number.";
            return 0;
        }
    }

    cout << num << " is a Prime number.";
    return 0;
}



