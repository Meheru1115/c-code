#include <iostream>
using namespace std;

int main() {
    int x, y, temp;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "\nBefore swapping: x = " << x << ", y = " << y << endl;

    // Swapping using a temporary variable
    temp = x;
    x = y;
    y = temp;

    cout << "After swapping:  x = " << x << ", y = " << y << endl;

    return 0;
}

