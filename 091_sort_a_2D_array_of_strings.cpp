#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[4][20] = {"banana", "apple", "mango", "cherry"};
    char temp[20];

    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 4; j++) {
            if (strcmp(str[j], str[i]) < 0) {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }

    for (int i = 0; i < 4; i++)
        cout << str[i] << endl;

    return 0;
}

