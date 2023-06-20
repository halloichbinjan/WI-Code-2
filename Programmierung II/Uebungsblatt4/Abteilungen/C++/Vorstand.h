#ifndef VORSTAND_H
#define VORSTAND_H
#include "Personal.h"

class Vorstand : public Personal
{
private:
    Personal *sekretaer;
    Personal *Fahrer;

public:
    Vorstand(Personal *sekretaer, Personal *Fahrer, string vorname, string nachname, float gehalt, string geburtsdatum);
};

#endif