#ifndef PERSONAL_H
#define PERSONAL_H
#include <stdlib.h>
#include <string>
using namespace std;

class Personal
{
protected:
    string vorname;
    string nachname;
    float gehalt;
    string geburtsdatum;

public:
    Personal(string vorname, string nachname, float gehalt, string geburtsdatum);
};

#endif