#include <iostream>
using namespace std;

int main() {
    int a[3][3];
    int mainSum = 0, antiSum = 0;

    cout << "Enter 3x3 matrix:\n";
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            cin >> a[i][j];

    for(int i=0;i<3;i++){
        mainSum += a[i][i];
        antiSum += a[i][3-i-1];
    }

    cout << "Main diagonal sum = " << mainSum << endl;
    cout << "Anti diagonal sum = " << antiSum << endl;
}
