#include <iostream>
using namespace std;

int main() {
    int low, high, i, j;
    cout << "Enter two numbers: ";
    cin >> low >> high;

    cout << "Prime numbers between " << low << " and " << high << " are: ";

    for (i = low; i <= high; i++) {
        if (i < 2) continue;   // skip numbers less than 2
        bool prime = true;

        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                prime = false;
                break;
            }
        }

        if (prime) cout << i << " ";
    }

    return 0;
}
