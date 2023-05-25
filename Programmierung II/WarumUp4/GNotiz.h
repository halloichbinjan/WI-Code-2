#ifndef GNOTIZ_H
#define GNOTIZ_H
#include <stdlib.h>
#include "Notiz.h"
#include "../Uebungsblatt3/Mitarbeiter.h"
using namespace std;

class GNotiz : public Notiz
{
private:
    char *datum;
    Mitarbeiter *mitarbeiter;

public:
    GNotiz(char *datum, Mitarbeiter *mitarbeiter, int, const char *text, const char *titel);
};

#endif