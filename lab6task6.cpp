#include <iostream>
using namespace std;

class Box {
public:
    double l, w, h;
    
    Box() : l(1), w(1), h(1) {}
    Box(double a, double b, double c) : l(a), w(b), h(c) {}

    double volume() { 
        return l * w * h; 
    }
};

Box largerBox(Box a, Box b) {
    if (a.volume() > b.volume()) {
        return a; 
    } else {
        return b; 
}
}

int main() 
{
    Box box1(2, 5, 5); 
    Box box2(4, 4, 9); 

  
    Box winner = largerBox(box1, box2);

    cout << "The larger box dimensions are: " 
         << winner.l << " x " << winner.w << " x " << winner.h << endl; 
    return 0;
}