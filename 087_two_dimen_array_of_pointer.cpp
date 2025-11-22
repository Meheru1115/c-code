#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20, c = 30, d = 40;

    int* arr[2][2] = {
        { &a, &b },
        { &c, &d }
    };

    cout << *arr[0][1] << endl;

    return 0;
}

