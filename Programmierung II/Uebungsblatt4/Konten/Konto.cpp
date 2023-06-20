#include "Konto.h"

Konto::Konto(Person *Inhaber, int kontonr, float kontostand)
{
    this->Inhaber = Inhaber;
    this->kontonr = kontonr;
    this->kontostand = kontostand;
}