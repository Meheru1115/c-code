#include <iostream>
using namespace std;

void reverseRec(string s, int i) {
    if (i < 0) return;
    cout << s[i];
    reverseRec(s, i - 1);
}

int main() {
    string s;
    getline(cin, s);
    reverseRec(s, s.size() - 1);
}
