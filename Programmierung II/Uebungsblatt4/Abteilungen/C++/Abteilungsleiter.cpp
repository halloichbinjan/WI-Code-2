#include "Abteilungsleiter.h"

Abteilungsleiter::Abteilungsleiter(string vorname, string nachname, float gehalt, string geburtsdatum, string abteilung) : Angestellter(vorname, nachname, gehalt, geburtsdatum, abteilung)
{
    this->abteilung = abteilung;
}