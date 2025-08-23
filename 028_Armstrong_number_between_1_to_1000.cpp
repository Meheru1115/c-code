#include <iostream>
using namespace std;

int main() {
    int num, temp, digit, sum;

    cout << "Armstrong numbers between 1 and 1000 are:" << endl;

    for (num = 1; num <= 1000; num++) {
        sum = 0;
        temp = num;

        while (temp > 0) {
            digit = temp % 10;
            sum = sum + (digit * digit * digit);  // cube of digit
            temp = temp / 10;
        }

        if (sum == num) {
            cout << num << " ";
        }
    }

    cout << endl;
    return 0;
}
