#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter rows: ";
    cin >> n;

    // upper part
    for (int i = 1; i <= n; i++) {
        for (int s = i; s < n; s++) cout << " ";
        for (int j = 1; j <= 2*i-1; j++) {
            if (j == 1 || j == 2*i-1) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }

    // lower part
    for (int i = n-1; i >= 1; i--) {
        for (int s = n; s > i; s--) cout << " ";
        for (int j = 1; j <= 2*i-1; j++) {
            if (j == 1 || j == 2*i-1) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }

    return 0;
}
