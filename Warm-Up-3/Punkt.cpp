#include <iostream>
using namespace std;

class Punkt
{
private:
    double x;
    double y;

public:
    Punkt();
    Punkt(double, double);
    void setX(double);
    void setY(double);
    double getX();
    double getY();
    void ausgabe();
};

Punkt::Punkt()
{
    x = 0;
    y = 0;
}

Punkt::Punkt(double a, double b)
{
    x = a;
    y = b;
}

void Punkt::setX(double a)
{
    x = a;
}

void Punkt::setY(double b)
{
    y = b;
}

double Punkt::getX()
{
    return x;
}

double Punkt::getY()
{
    return y;
}

void Punkt::ausgabe()
{
    cout << "X: " << x << endl;
    cout << "Y: " << y << endl;
}