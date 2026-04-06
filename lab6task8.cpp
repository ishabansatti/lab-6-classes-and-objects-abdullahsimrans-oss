#include <iostream>
using namespace std;

class MathConstants
{
private:
    const double pi; 
    const double e;
public:
    MathConstants() : pi(3.141), e(2.718) {}
    double getPi()
        const { return pi; }
    double getE()
        const { return e; }
};
int main()
{
    const MathConstants mc;
    cout << "PI: " << mc.getPi() << endl;
    cout << "E: " << mc.getE() << endl;
    return 0;
}