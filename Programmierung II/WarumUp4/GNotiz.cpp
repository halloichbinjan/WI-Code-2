#include "GNotiz.h"

GNotiz::GNotiz(char *datum, Mitarbeiter *mitarbeiter, int nr, const char *text, const char *titel) : Notiz(nr, titel, text)
{
    this->datum = datum;
    this->mitarbeiter = mitarbeiter;
}