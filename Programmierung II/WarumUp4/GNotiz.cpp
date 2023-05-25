#include "GNotiz.h"

GNotiz::GNotiz(char *datum, Mitarbeiter *mitarbeiter, int nr, const char *text, const char *titel) : Notiz(nr, text, titel)
{
    this->datum = datum;
    this->mitarbeiter = mitarbeiter;
}