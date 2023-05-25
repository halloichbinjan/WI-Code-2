#ifndef ANGESTELLER_H
#define ANGESTELLER_H
#include "Personal.cpp"
#include <string>

class Angestellter : public Personal
{
protected:
    string abteilung;

public:
    Angestellter(string vorname, string nachname, float gehalt, string geburtsdatum, string abteilung);
};

#endif