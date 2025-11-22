#include <iostream>
using namespace std;

void swapNum(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a = 5, b = 10;
    swapNum(&a, &b);

    cout << "a = " << a << ", b = " << b;
    return 0;
}

