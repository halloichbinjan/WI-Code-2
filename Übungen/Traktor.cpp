#include <cstring>
#include <iostream>
using namespace std;

class Traktor
{
private:
    int id;
    char *farbe;
    double laenge;
    double breite;
    int ps;
    double gewicht;

public:
    Traktor()
    {
        id = 0;
        laenge = 0;
        breite = 0;
        ps = 0;
        gewicht = 0;
        farbe = new char[0];
    }
    Traktor(int _id, char *_farbe, double _laenge, double _breite, int _ps, double _gewicht)
    {
        id = _id;
        laenge = _laenge;
        breite = _breite;
        ps = _ps;
        gewicht = _gewicht;
        farbe = new char[strlen(_farbe) + 1];
        strcpy(farbe, _farbe);
    }
    Traktor(Traktor &_other)
    {
        id = _other.id;
        laenge = _other.laenge;
        breite = _other.breite;
        ps = _other.ps;
        gewicht = _other.gewicht;
        farbe = new char[strlen(_other.farbe) + 1];
        strcpy(farbe, _other.farbe);
    }
    int getId()
    {
        return this->id;
    }
    char *getFarbe()
    {
        return this->farbe;
    }
    double getLaenge()
    {
        return this->laenge;
    }
    double getBreite()
    {
        return this->breite;
    }
    int getPs()
    {
        return this->ps;
    }
    double getGewicht()
    {
        return this->gewicht;
    }
    void setId(int _id)
    {
        this->id = _id;
    }
    void setFarbe(char *_farbe)
    {
        delete[] this->farbe;
        this->farbe = new char[strlen(_farbe) + 1];
        strcpy(this->farbe, _farbe);
    }
    void setLaenge(double _laenge)
    {
        this->laenge = _laenge;
    }
    void setBreite(double _breite)
    {
        this->breite = _breite;
    }
    void setPs(int _ps)
    {
        this->ps = _ps;
    }
    void setGewicht(double _gewicht)
    {
        this->gewicht = _gewicht;
    }
    friend ostream &operator<<(ostream &out, const Traktor &t);
};

ostream &operator<<(ostream &out, const Traktor &t)
{
    out << "ID: " << t.id << endl
        << "Farbe: " << t.farbe << endl
        << "Länge: " << t.laenge << endl
        << "Breite: " << t.breite << endl
        << "PS: " << t.ps << endl
        << "Gewicht: " << t.gewicht << endl
        << endl;
    return out;
}

// int main()
// {
//     Traktor traktor1; // Verwendung des Standardkonstruktors
//     // Oder
//     Traktor traktor2(1, "Rot", 2.5, 1.8, 150, 2000);

//     cout << traktor1;
//     cout << traktor2;

//     return 0;
// }