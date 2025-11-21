#include <iostream>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    string rev = string(s.rbegin(), s.rend());

    if (s == rev) cout << "Palindrome";
    else cout << "Not Palindrome";
}
