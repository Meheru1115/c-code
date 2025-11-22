#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream in("a.txt");
    ofstream out("b.txt", ios::app);

    out << in.rdbuf();

    cout << "Content appended!";
}

