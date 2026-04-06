#include <iostream>
#include <string>
using namespace std;

struct Address {
    string street;
    string city;
    int postalCode;
};
class Hospital {
public:
    string name;
    Address location;

    Hospital(string n, Address loc) : name(n), location(loc) {}

    void display() {
        cout << "Hospital: " << name << "\nAddress: " << location.street 
             << ", " << location.city << " (" << location.postalCode << ")" << endl;
    }
};
int main() {
    Address addr = {"123 Health St", "Burewala", 61010};
    Hospital h("City Care", addr); 
    h.display();
    return 0;
}