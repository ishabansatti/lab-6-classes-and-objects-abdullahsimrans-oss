#include <iostream>
using namespace std;

class Temperature
{
private:
    double celsius;

public:
    Temperature(double c) { setCelsius(c); }

    void setCelsius(double c)
    {
        if (c < -273.15)
        {
            cout << "Invalid temperature! Below absolute zero." << endl;
        }
        else
        {
            celsius = c;
        }
    }

    double getCelsius()
        const { return celsius; }
    double getFahrenheit()
        const { return (celsius * 9.0 / 5.0) + 32; }
    double getKelvin()
        const { return celsius + 273.15; }
};

int main()
{
    Temperature t(25.0);
    t.setCelsius(-300.0);
    cout << "Celsius: " << t.getCelsius() << " | Fahrenheit: " << t.getFahrenheit()
         << " | Kelvin: " << t.getKelvin() << endl;
    return 0;
}