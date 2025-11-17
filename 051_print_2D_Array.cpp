#include <iostream>
using namespace std;

int main() {
    int rows = 2, cols = 3;
    int arr[2][3] = { {1, 2, 3}, {4, 5, 6} };

    cout << "2D Array:" << endl;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
