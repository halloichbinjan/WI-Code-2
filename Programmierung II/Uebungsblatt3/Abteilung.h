#include "IntArray.cpp";
#include <string>;
using namespace std;

class Abteilung
{
private:
    string bezeichnung;
    int abteilungsnummer;
    string abteilungsleiter;

public:
    Abteilung();
    Abteilung(string abteilungsleiter, int abteilungsnummer = 0, string bezeichnung = "");
    friend ostream &operator<<(ostream &out, const Abteilung &a);
    void ausgabe();
    bool operator==(const Abteilung &other);
};

Abteilung::Abteilung()
{
    this->abteilungsleiter = "";
    this->bezeichnung = "";
    this->abteilungsnummer = 0;
}

Abteilung::Abteilung(string abteilungsleiter, int abteilungsnummer = 0, string bezeichnung = "")
{
    this->abteilungsleiter = abteilungsleiter;
    this->bezeichnung = bezeichnung;
    this->abteilungsnummer = abteilungsnummer;
}

ostream &operator<<(ostream &out, const Abteilung &a)
{
    return out;
}

void Abteilung::ausgabe()
{
    cout << "Abteilungsleiter: " << abteilungsleiter << endl;
    cout << "Abteilungsnummer: " << abteilungsnummer << endl;
    cout << "Bezeichnung: " << bezeichnung << endl;
}

bool Abteilung::operator==(const Abteilung &other)
{
    return this->abteilungsnummer == other.abteilungsnummer;
}
