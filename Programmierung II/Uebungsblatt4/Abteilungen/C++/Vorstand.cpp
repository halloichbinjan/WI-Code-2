#include "Vorstand.h"

Vorstand::Vorstand(Personal *sekretaer, Personal *Fahrer, string vorname, string nachname, float gehalt, string geburtsdatum) : Personal(vorname, nachname, gehalt, geburtsdatum)
{
    this->sekretaer = sekretaer;
    this->Fahrer = Fahrer;
}