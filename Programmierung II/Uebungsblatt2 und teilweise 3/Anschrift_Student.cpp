#include <iostream>
#include <cstring>
using namespace std;

class Anschrift
{
private:
    char strasse[120];
    char hausnr[20];
    char plz[10];
    char ort[120];
    char telnr[30];

public:
    Anschrift();
    Anschrift(char *, char *,
              char * = "51465", char * = "Bergisch Gladbach", char * = "Keine Telefonnummer");

    const char *getStrasse() const;
    const char *getHausnr() const;
    const char *getPlz() const;
    const char *getOrt() const;
    const char *getTelnr() const;

    // ... weitere Methoden ...
};

Anschrift::Anschrift()
{
    strcpy(strasse, "Keine Strasse");
    strcpy(hausnr, "Keine Hausnummer");
    strcpy(plz, "Keine PLZ");
    strcpy(ort, "Keine Stadt");
    strcpy(telnr, "Keine Telefonnummer");
}

Anschrift::Anschrift(char *str, char *nr, char *p, char *o, char *t)
{
    strcpy(strasse, str);
    strcpy(hausnr, nr);
    strcpy(plz, p);
    strcpy(ort, o);
    strcpy(telnr, t);
}

const char *Anschrift::getStrasse() const
{
    return strasse;
}

const char *Anschrift::getHausnr() const
{
    return hausnr;
}

const char *Anschrift::getPlz() const
{
    return plz;
}

const char *Anschrift::getOrt() const
{
    return ort;
}

const char *Anschrift::getTelnr() const
{
    return telnr;
}

int main()
{
    Anschrift a1;
    Anschrift a2("Hauptstrasse", "1", "51465", "Bergisch Gladbach", "02202/123456");

    cout << "Anschrift 1: " << a1.getStrasse() << " " << a1.getHausnr() << ", "
         << a1.getPlz() << " " << a1.getOrt() << ", " << a1.getTelnr() << endl;
    cout << "Anschrift 2: " << a2.getStrasse() << " " << a2.getHausnr() << ", "
         << a2.getPlz() << " " << a2.getOrt() << ", " << a2.getTelnr() << endl;

    return 0;
}

class Student
{
private:
    char matnr[8];             // 7-stellige Matrikelnummer
    char nachname[80];         // Nachname des Studierenden
    char vorname[80];          // Vorname des Studierenden
    Anschrift semesterAdresse; // Anschrift des Studierenden waehrend der Hochschulphase
    Anschrift privatAdresse;   // Private Anschrift des Studierenden

public:
    Student(const char *, const char *, const char *, Anschrift, Anschrift);

    // ... weitere Methoden ...
};

Student::Student(const char *m, const char *n, const char *v, Anschrift s, Anschrift p)
{
    strcpy(matnr, m);
    strcpy(nachname, n);
    strcpy(vorname, v);
    semesterAdresse = s;
    privatAdresse = p;
}