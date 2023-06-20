#ifndef GIROKONTO_H
#define GIROKONTO_H
#include "Konto.h"
#include <string.h>

class Girokonto : public Konto
{
private:
    float dispo;
    float p1;
    float p2;
    float p3;
    int kennzeichen;

public:
    Girokonto(Person *Inhaber, int kontonr, float kontostand, float dispo, float p1, float p2, float p3, int kennzeichen);
};

#endif
