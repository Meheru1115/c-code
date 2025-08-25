#include <iostream>
using namespace std;

int main() {
    int n;
    long long f1 = 0, f2 = 1, next, sum = 0;

    cout << "Enter number of terms (N): ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        if (i == 0)
            next = f1;
        else if (i == 1)
            next = f2;
        else {
            next = f1 + f2;
            f1 = f2;
            f2 = next;
        }
        if (i % 2 == 0) {
            sum += next;
        }
    }

    cout << "Sum of Fibonacci numbers at even indexes up to "
         << n << " terms = " << sum << endl;

    return 0;
}
