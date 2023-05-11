#include <iostream>
#include <cstring>
using namespace std;

class Bruch
{
private:
    int z, n; // Zaehler und Nenner

public:
    Bruch();         // Default-Konstruktor
    Bruch(int, int); // Konstruktor
    friend ostream &operator<<(ostream &out, const Bruch &b);
    void eingabe();
    void Kuerzen(int &, int &);
    int GGT(int, int);
    Bruch operator+(Bruch);
    Bruch operator-(Bruch);
    Bruch operator*(Bruch);
    Bruch operator/(Bruch);
    Bruch(const Bruch &other);

}; // end class Bruch

Bruch::Bruch()
{
    z = 1;
    n = 1;
    cout << "Default-Konstruktor" << endl;
}

Bruch::Bruch(int _z, int _n)
{
    z = _z;
    n = _n;
    cout << "Kanonischer Konstruktor" << endl;
}

Bruch::Bruch(const Bruch &other) : z(other.z), n(other.n)
{
    cout << "Copy-Konstruktor" << endl;
}

void Bruch::eingabe()
{
    int zIn;
    int nIn;

    do
    {
        cout << "Bitte einen Zähler eingeben: ";
        cin >> zIn;

    } while (zIn < 0);
    do
    {
        cout << "Bitte einen Nenner eingeben: ";
        cin >> nIn;

    } while (nIn <= 0);
    Kuerzen(zIn, nIn);

    this->z = zIn;
    this->n = nIn;
}

ostream &operator<<(ostream &out, const Bruch &b)
{
    out << b.z << "/" << b.n;
    return out;
}
// -------------------------------------------------------------------------
// Name:        GGT
// Aufgabe:     Ermittlung des groessten gemeinsamen Teilers zweier
//              (positiver) ganzer Zahlen
// Parameter:   zwei int-Werte a und b
// Rueckgabe:   int-Wert, der groesste gemeinsame Teiler von a und b
// Bemerkungen: negative Werte werden ebenfalls toleriert und analog zu
//              den positiven Werten behandelt
// Beispiel:    GGT(14,21)==7
// -------------------------------------------------------------------------
int Bruch::GGT(int a, int b)
{
    if (a == 0 || b == 0)
        return 1;

    if (a < 0)
        a *= (-1);
    if (b < 0)
        b *= (-1);

    while (a != b)
    {
        if (a > b)
            a -= b;
        else // if (b>a)
            b -= a;
    }
    return a;
} // end GGT(int, int)

// -------------------------------------------------------------------------
// Name:        Kuerzen
// Aufgabe:     Kuerzt den Bruch z/n
// Parameter:   zwei int-Variablen per Referenz z(aehler) und n(enner)
// Rueckgabe:   keine
// Bemerkungen: keine
// Beispiel:    z=21; n=14;
//              Kuerzen(z,n);
//              // Nun ist z==3 und n==2
// -------------------------------------------------------------------------
void Bruch::Kuerzen(int &z, int &n)
{
    int ggt;

    if ((ggt = GGT(z, n)) > 1)
    {
        z /= ggt;
        n /= ggt;
    }

    if (n < 0) // Nenner stets positiv
    {
        z = -z;
        n = -n;
    }

} // end Kuerzen(int&,int&)

Bruch Bruch::operator+(Bruch q1)
{
    Bruch q;
    q.z = z * q1.n + q1.z * n;
    q.n = n * q1.n;
    return (q);
} // end Bruch::addiere
Bruch Bruch::operator-(Bruch q1)
{
    Bruch q;
    // Beim Subtrahieren müssen die Brüche auf den gleichen Nenner gebracht werden
    int neuer_nenner = n * q1.n;
    q.z = z * q1.n - q1.z * n;
    q.n = neuer_nenner;
    cout << q.z << "/" << q.n << endl;
    return q;
}

Bruch Bruch::operator*(Bruch q1)
{
    Bruch q;
    q.z = z * q1.z;
    q.n = n * q1.n;
    return (q);
}
Bruch Bruch::operator/(Bruch q1)
{
    Bruch q;
    q.z = z * q1.n;
    q.n = n * q1.z;
    return (q);
}

int main()
{
    Bruch bruch;
    Bruch bruch1(1, 2);
    bruch.eingabe();
    bruch - bruch1;
}