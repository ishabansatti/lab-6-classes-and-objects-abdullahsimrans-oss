#include <iostream>
#include <string>
using namespace std;

class Book {
public:
    string title;
    string author;
    double price;

    void display() {
        cout << "Title: " << title << "  Author: " << author << "  Price: " << price << endl;
    }
};

int main() {
    Book books[3]; 
    for(int i = 0; i < 3; i++) {
        cout << "Enter details for Book " << i + 1 << " (Title, Author, Price): " << endl;
        cin >> books[i].title >> books[i].author >> books[i].price;
    }
    cout << "\nBook Details:\n";
    for(int i = 0; i < 3; i++) {
        books[i].display(); 
    }
    return 0;
}