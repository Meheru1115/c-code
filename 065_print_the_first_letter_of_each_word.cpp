#include <iostream>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    bool newWord = true;

    for(char c : s) {
        if (c == ' ') newWord = true;
        else if (newWord) {
            cout << c << " ";
            newWord = false;
        }
    }
}
