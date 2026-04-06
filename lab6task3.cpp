#include <iostream>
using namespace std;

class Rectangle {
public:
    double length, width;
    double area()
     { 
        return length * width;
     }
};
void compare(Rectangle a, Rectangle b) {
    if (a.area() > b.area()) {
        cout << "First rectangle is larger." << endl;
    } else if (b.area() > a.area()) {
        cout << "Second rectangle is larger." << endl;
    } else {
        cout << "Both rectangles have the same area." << endl;
    }
}
int main() {
    Rectangle r1, r2;
    r1.length = 5; r1.width = 4;
    r2.length = 6; r2.width = 3;
    
    compare(r1, r2); 
    return 0;
}