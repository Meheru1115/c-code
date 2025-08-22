#include <iostream>
using namespace std;

int main() {
    float fahrenheit, celsius;

    // Input temperature in Fahrenheit
    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;

    // Conversion formula
    celsius = (fahrenheit - 32) * 5.0 / 9.0;

    // Output result
    cout << "Temperature in Celsius: " << celsius << endl;

    return 0;
}
