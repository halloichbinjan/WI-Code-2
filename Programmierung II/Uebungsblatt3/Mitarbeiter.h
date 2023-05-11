#include <string>;
#include "IntArray.cpp";
#include "Abteilung.h";
using namespace std;

class Mitarbeiter
{
private:
    string nachname;
    string vorname;
    IntArray MANummer;
    double monatsgehalt;
    Abteilung abteilung;

public:
    Mitarbeiter(string nachname, string vorname, IntArray MANummer, Abteilung abteilung, double monatsgehalt = 0.0);
    void ausgabe();
    double getGehalt() const;
    void setGehalt(double gehalt);
    bool istIn(Abteilung abteilung);
};

Mitarbeiter::Mitarbeiter(string nachname, string vorname, IntArray MANummer, Abteilung abteilung, double monatsgehalt = 0.0)
{
    this->nachname = nachname;
    this->vorname = vorname;
    this->MANummer = MANummer;
    this->abteilung = abteilung;
    this->monatsgehalt = monatsgehalt;
}

void Mitarbeiter::ausgabe()
{
    cout << "Nachname: " << nachname << endl;
    cout << "Vorname: " << vorname << endl;
    cout << "MA-Nummer: " << MANummer << endl;
    cout << "Abteilung: " << abteilung << endl;
    cout << "Monatsgehalt: " << monatsgehalt << endl;
}

double Mitarbeiter::getGehalt() const
{
    return monatsgehalt;
}

void Mitarbeiter::setGehalt(double gehalt)
{
    this->monatsgehalt = gehalt;
}

bool Mitarbeiter::istIn(Abteilung abteilung)
{

    return this->abteilung == abteilung;
}