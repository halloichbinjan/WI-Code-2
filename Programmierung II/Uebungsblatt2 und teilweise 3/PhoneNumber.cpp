#include <iostream>
#include <cstring>
using namespace std;

class PhoneNumber
{
private:
    char laenderVorwahl[3];
    char netzwerkVorwahl[4];
    char nummer[9];

public:
    PhoneNumber();
    const char *getLeanderVorwahl() const;
    const char *getNetzwerkVorwahl() const;
    bool equals(const PhoneNumber &) const;
    void ausgabe(bool) const;
    char *getUserInput(int, int, char *);
};

PhoneNumber::PhoneNumber()
{
    strcpy(laenderVorwahl, getUserInput(2, 3, "Ländervorwahl"));
    strcpy(netzwerkVorwahl, getUserInput(3, 4, "Netzwerkvorwahl"));
    strcpy(nummer, getUserInput(8, 9, "Nummer"));
}

const char *PhoneNumber::getLeanderVorwahl() const
{
    return laenderVorwahl;
}

const char *PhoneNumber::getNetzwerkVorwahl() const
{
    return netzwerkVorwahl;
}

bool PhoneNumber::equals(const PhoneNumber &other) const
{
    return strcmp(laenderVorwahl, other.laenderVorwahl) == 0 && strcmp(netzwerkVorwahl, other.netzwerkVorwahl) == 0 && strcmp(nummer, other.nummer) == 0;
}

void PhoneNumber::ausgabe(bool mode = 0) const
{
    if (mode == 1)
    {
        cout << "+" << laenderVorwahl << " " << netzwerkVorwahl << " " << nummer << endl;
    }
    else if (mode == 0)
    {
        cout << 0 << netzwerkVorwahl << " " << nummer << endl;
    }
    else
    {
        cout << "Falscher Modus" << endl;
    }
}

char *PhoneNumber::getUserInput(int start, int end, char *title)
{
    char *input = new char[end + 1];
    do
    {
        cout << "Bitte geben Sie eine " << title << " mit einer Länge zwischen " << start << " und " << end << " ein: ";
        cin >> input;
    } while (strlen(input) < start || strlen(input) > end);
    return input;
}

int main()
{
    PhoneNumber num1;
    PhoneNumber num2;

    num1.ausgabe();
    num2.ausgabe();

    return 0;
}
