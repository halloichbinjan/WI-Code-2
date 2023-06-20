#include "Traktor.cpp"

class TraktorVerwaltung
{
private:
    Traktor *liste;
    int anzahl;

public:
    TraktorVerwaltung()
    {
        liste = new Traktor[0];
        anzahl = 0;
    }
    // Traktorverwaltung(Traktor *_liste, int _anzahl)
    // {
    //     anzahl = _anzahl;
    //     liste = new Traktor[anzahl];
    //     for (int i = 0; i < anzahl; i++)
    //     {
    //         liste[i] = _liste[i];
    //     }
    // }
    TraktorVerwaltung(TraktorVerwaltung &_other)
    {
        liste = new Traktor[_other.anzahl];
        anzahl = _other.anzahl;
        for (int i = 0; i < anzahl; i++)
        {
            liste[i] = _other.liste[i];
        }
    }

    void addTraktor(Traktor &t)
    {
        Traktor *newList = new Traktor[anzahl + 1];
        for (int i = 0; i < anzahl; i++)
        {
            newList[i] = liste[i];
        }
        newList[anzahl] = t;
        delete[] liste;
        anzahl++;
        liste = new Traktor[anzahl];

        for (int i = 0; i < anzahl; i++)
        {
            liste[i] = newList[i];
        }
        delete[] newList;
    }

    friend ostream &
    operator<<(ostream &out, TraktorVerwaltung tv)
    {
        for (int i = 0; i < tv.anzahl; i++)
        {
            out << tv.liste[i] << endl;
        }
        return out;
    }

    void operator+(Traktor &t)
    {
        addTraktor(t);
    }
};

int main()
{

    Traktor traktor1(1, "Rot", 2.5, 1.8, 150, 2000);
    Traktor traktor2(2, "Gelb", 2.5, 1.8, 150, 2000);
    Traktor traktor3(3, "Grün", 2.5, 1.8, 150, 2000);
    Traktor traktor4(4, "Blau", 2.5, 1.8, 150, 2000);
    TraktorVerwaltung tv1;
    tv1.addTraktor(traktor1);
    tv1 + traktor2;
    tv1 + traktor3;
    tv1 + traktor4;
    cout << tv1;
}