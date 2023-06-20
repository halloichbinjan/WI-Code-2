#include <iostream>
using namespace std;

class Shape
{
public:
    Shape();
    Shape(double, double, double);
    void area();

private:
    double flaeche;
    double x;
    double y;
};

Shape::Shape() : flaeche(0), x(0), y(0) {}

Shape::Shape(double _flaeche, double _x, double _y)
{
    this->flaeche = _flaeche;
    this->x = _x;
    this->y = _y;
}

void Shape::area()
{
    cout << this->flaeche;
}
