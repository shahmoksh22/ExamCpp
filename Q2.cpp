#include <iostream>
#include <string>

using namespace std;

class Person {
public:
    string name;
    int age;
    string address;

    Person(string n, int a, string addr) : name(n), age(a), address(addr) {}

    void displayDetails() {
        cout << "Hey there, I'm " << name << "." << endl;
        cout << "I'm currently " << age << " years old." << endl;
        cout << "Living at " << address << "." << endl;
        cout << endl;
    }
};

int main() {
    const int numPeople = 3;

    Person folks[numPeople] = {
        {"MOKSH", 18, "AHMEDABAD"},
        {"HEER", 13, "SURAT"},
        {"TIRTH", 10, "AHMEDABAD"}
    };

    for (int i = 0; i < numPeople; ++i) {
        cout << "Meet person #" << i + 1 << ":" << endl;
        folks[i].displayDetails();
    }

    return 0;
}
