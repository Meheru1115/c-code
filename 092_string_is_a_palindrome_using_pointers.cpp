#include <iostream>
using namespace std;

int main() {
    char str[50];
    cout << "Enter string: ";
    cin >> str;

    char *start = str;
    char *end = str;

    while (*end) end++;
    end--;

    bool flag = true;

    while (start < end) {
        if (*start != *end) {
            flag = false;
            break;
        }
        start++;
        end--;
    }

    if (flag)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}

