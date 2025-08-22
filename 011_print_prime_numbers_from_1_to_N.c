#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;

    for (int num = 2; num <= N; num++) {
        int i;
        for (i = 2; i < num; i++) {
            if (num % i == 0)
                break;
        }
        if (i == num) {
            cout << num << " ";
        }
    }

    return 0;
}
