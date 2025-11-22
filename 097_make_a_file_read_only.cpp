#include <iostream>
using namespace std;

int main() {
    system("attrib +r data.txt");
    cout << "File is now read-only.";
    return 0;
}

