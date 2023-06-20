#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
    const string gb, adresse, email;
    int festnetz, mobil, arbeit;
    char *vorname;
    char nachname[10];

public:
    Person(char *_vorname, char *nachname)
    {
        vorname = new char[strlen(_vorname) + 1];
        strcpy(vorname, _vorname);
    }
    ~Person()
    {
        delete[] vorname;
    }
    Person()
    {
        vorname = nullptr;
    }

    const string getAdresse()
    {
        return this->adresse;
    }
};
