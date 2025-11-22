#include <iostream>
#include <fstream>
using namespace std;

struct Student {
    char name[50];
    int age;
};

int main() {
    Student s1 = {"Rahim", 20}, s2;

    ofstream out("student.dat", ios::binary);
    out.write((char*)&s1, sizeof(s1));
    out.close();

    ifstream in("student.dat", ios::binary);
    in.read((char*)&s2, sizeof(s2));
    in.close();

    cout << "Name: " << s2.name << "\nAge: " << s2.age;
}

