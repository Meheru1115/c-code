
#include <iostream>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    int count = 0;
    for(char c : s) count++;

    cout << "Length = " << count;
}
