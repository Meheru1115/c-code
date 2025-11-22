#include <iostream>
using namespace std;

int main() {
    int a[3][3];

    cout << "Enter 3x3 matrix:\n";
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            cin >> a[i][j];


    for(int i=0;i<3;i++){
        int temp = a[i][0];
        a[i][0] = a[i][2];
        a[i][2] = temp;
    }

    cout << "Matrix after swapping row elements:\n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}
