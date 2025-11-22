#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");

    out << in.rdbuf();

    cout << "Written to output file!";
}

