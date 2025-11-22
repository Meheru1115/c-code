#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    FILE *fp = tmpfile();   // creates temporary file
    if (!fp) {
        cout << "Unable to create temporary file!";
        return 1;
    }
    fputs("This is a temp file.", fp);
    cout << "Temporary file created successfully!\n";
    fclose(fp);
    return 0;
}

