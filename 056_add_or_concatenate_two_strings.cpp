#include <iostream>
using namespace std;

int main() {
    string a, b;
    cout << "Enter first string: ";
    getline(cin, a);
    cout << "Enter second string: ";
    getline(cin, b);

    string c = a + b;

    cout << "Concatenated: " << c;
    return 0;
}
