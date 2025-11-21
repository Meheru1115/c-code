#include <iostream>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    int freq[256] = {0};
    for(char c : s) freq[c]++;

    for(char c : s) {
        if (freq[c] == 1) {
            cout << c;
            return 0;
        }
    }
    cout << "No non-repeating character";
}
