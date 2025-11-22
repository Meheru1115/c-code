#include <iostream>
using namespace std;

int main() {
    int arr[5] = {5, 2, 8, 1, 4};
    int *p = arr;

    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (*(p + j) < *(p + i)) {
                int temp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = temp;
            }
        }
    }

    cout << "Sorted: ";
    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";

    return 0;
}

