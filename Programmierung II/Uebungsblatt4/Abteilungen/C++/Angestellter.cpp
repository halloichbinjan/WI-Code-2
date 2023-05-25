#include "Angestellter.h"
#include <string>

Angestellter::Angestellter(string vorname, string nachname, float gehalt, string geburtsdatum, string abteilung) : Personal(vorname, nachname, gehalt, geburtsdatum)
{
    if (abteilung.compare("Einkauf") == 0 || abteilung.compare("Vertrieb") == 0 || abteilung.compare("Personal") == 0 || abteilung.compare("Entwicklung") == 0)
    {
        this->abteilung = abteilung;
    }
    else
    {
        this->abteilung = "";
    }
}