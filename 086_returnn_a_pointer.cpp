#include <iostream>
using namespace std;

int* getValue() {
    int *p = new int;
    *p = 50;
    return p;
}

int main() {
    int *ptr = getValue();
    cout << "Returned value: " << *ptr << endl;

    delete ptr; // free memory
    return 0;
}

