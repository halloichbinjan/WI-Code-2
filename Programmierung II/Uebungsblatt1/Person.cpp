#include <iostream>
#include <cstdlib>
using namespace std;

// Aufgabe 1-6
class Person
{
private:
    int PersonNr;
    char Nachname[50];
    char Vorname[30];
    float Gehalt;

public:
    Person();                           // Default-Konstruktor
    Person(int, char *, char *, float); // Weiterer Konstruktor

    void setPersonNr(int);
    void setNachname(char *);
    void setVorname(char *);
    void setGehalt(float);
    void ausgabe();

    bool operator==(const Person &p);
};

Person::Person()
{
    PersonNr = 0;
    strcpy(Nachname, " ");
    // ODER
    // for (int i = 0; i < 50; i++)
    // {
    //     Nachname[i] = ' ';
    // }

    strcpy(Vorname, " ");
    // ODER
    //  for (int i = 0; i < 30; i++)
    //  {
    //      Vorname[i] = ' ';
    //  }
    Gehalt = 0.0;
}

Person::Person(int a, char *b, char *c, float d)
{
    PersonNr = a;
    strcpy(Nachname, b);
    // ODER
    // for (int i = 0; i < 50; i++)
    // {
    //     Nachname[i] = b[i];
    // }

    strcpy(Vorname, c);
    // ODER
    // for (int i = 0; i < 30; i++)
    // {
    //     Vorname[i] = c[i];
    // }
    Gehalt = d;
}

void Person::setPersonNr(int a)
{
    PersonNr = a;
}

void Person::setNachname(char *a)
{
    strcpy(Nachname, a);

    // ODER
    // for (int i = 0; i < 50; i++)
    // {
    //     Nachname[i] = a[i];
    // }
}

void Person::setVorname(char *a)
{
    strcpy(Vorname, a);

    // ODER
    // for (int i = 0; i < 30; i++)
    // {
    //     Vorname[i] = a[i];
    // }
}

void Person::setGehalt(float a)
{
    Gehalt = a;
}

void Person::ausgabe()
{
    cout << "PersonNr: " << PersonNr << endl
         << "Nachname: " << Nachname << endl
         << "Vorname: " << Vorname << endl
         << "Gehalt: " << Gehalt << endl;
}

bool Person::operator==(const Person &p)
{
    if (PersonNr == p.PersonNr)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// end class Person
int main()
{
    Person person1(111, "Meier", "Alfons", 999.99), person2;
    person2.setNachname("Kaiser");
    person2.setVorname("Anna");
    person2.setPersonNr(112);
    person2.setGehalt(1300.45);
    cout << "Person 1: ";
    person1.ausgabe();
    cout << "Person 2: ";
    person2.ausgabe();
    return EXIT_SUCCESS;

} // end main()
