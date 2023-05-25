#ifndef ABTEILUNGSLEITER_H
#define ABTEILUNGSLEITER_H
#include "Angestellter.cpp"
#include <string>

class Abteilungsleiter : public Angestellter
{
private:
    string abteilung;

public:
    Abteilungsleiter(string vorname, string nachname, float gehalt, string geburtsdatum, string abteilung);
};

#endif