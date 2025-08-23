#include <iostream>
using namespace std;

int main() {
    int low, high, num, temp, digit, sum;

    cout << "Enter lower interval: ";
    cin >> low;
    cout << "Enter upper interval: ";
    cin >> high;

    cout << "Armstrong numbers between " << low << " and " << high << " are:" << endl;

    for (num = low; num <= high; num++) {
        sum = 0;
        temp = num;

        while (temp > 0) {
            digit = temp % 10;
            sum = sum + (digit * digit * digit);  // cube of each digit
            temp = temp / 10;
        }

        if (sum == num) {
            cout << num << " ";
        }
    }

    cout << endl;
    return 0;
}
