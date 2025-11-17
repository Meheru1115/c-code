#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 5, 8, 12, 20, 25};
    int n = 6;
    int key = 12;

    int low = 0, high = n - 1, mid;
    bool found = false;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key) {
            found = true;
            break;
        }
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    if (found)
        cout << "Element found at index = " << mid;
    else
        cout << "Element not found";

    return 0;
}
