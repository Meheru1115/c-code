include <iostream>
using namespace std;

int main() {
    float P, R, T;
    cout << "Enter principal, rate, time: ";
    cin >> P >> R >> T;

    float SI = (P * R * T) / 100;
    cout << "Simple Interest = " << SI << endl;

    return 0;
}
