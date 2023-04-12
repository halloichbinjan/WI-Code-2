#include <iostream>

using namespace std;

void ausgabe(char);
void ausgabe(char *);
void ausgabe(char *, char);
void tauschen(int &, int &);
void tauschen(float &, float &);

void tauschen(float *, float *, int);
void minmax(int[], int, int &, int &);

int main()
{
    int data[] = {4, 8, 23, -17, 2, -6};
    int anzahl = sizeof(data) / sizeof(data[0]);
    int min = 0, max = 0;
    minmax(data, anzahl, min, max);
}

// 1-1
void ausgabe(char c)
{
    cout << "*****" << endl
         << "* " << c << " *" << endl
         << "*****" << endl;
}

// 1-1 Erweiterung
void ausgabe(char *s)
{
    string sAsString = s;

    for (int i = 0; i < sAsString.length() + 4; i++)
    {
        cout << "*";
    }
    cout << endl;
    cout << "* " << sAsString << " *" << endl;
    for (int i = 0; i < sAsString.length() + 4; i++)
    {
        cout << "*";
    }

    /* ODER (OHNE KONVERTIERUNG ZU STRING):
    int len = 0;
    while (s[len] != '\0')
    {
        len++;
    }

    for (int i = 0; i < len + 4; i++)
    {
        cout << "*";
    }
    cout << endl;
    cout << "* " << s << " *" << endl;
    for (int i = 0; i < len + 4; i++)
    {
        cout << "*";
    }
    */
}

// 1-2
void ausgabe(char *s, char zeichen)
{
    string sAsString = s;

    for (int i = 0; i < sAsString.length() + 4; i++)
    {
        cout << zeichen;
    }
    cout << endl;
    cout << zeichen << " " << sAsString << " " << zeichen << endl;
    for (int i = 0; i < sAsString.length() + 4; i++)
    {
        cout << zeichen;
    }

    /* ODER (OHNE KONVERTIERUNG ZU STRING):
    int len = 0;
    while (s[len] != '\0')
    {
        len++;
    }

    for (int i = 0; i < len + 4; i++)
    {
        cout << zeichen;
    }
    cout << endl;
    cout << zeichen << " " << s << " " << zeichen << endl;
    for (int i = 0; i < len + 4; i++)
    {
        cout << zeichen;
    }
    */
}

// 1-3
// C++: Call by Reference
// Das & ist das Referenzzeichen
void tauschen(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

// 1-3 Erweiterung
void tauschen(float &x, float &y)
{
    float temp = x;
    x = y;
    y = temp;
}

// 1-3 Erweiterung 2
void tauschen(float *x, float *y, int anzahl)
{
    float temp[anzahl];
    for (int i = 0; i < anzahl; i++)
    {
        temp[i] = x[i];
        x[i] = y[i];
        y[i] = temp[i];
    }
}

// 1-3 Antwort
/*
Die ersten beiden Versionen kann man nicht in Java umsetzen, da primiteve Datentypen als Parameter keine Referenzen sind. Arrays als Parameter jedoch schon,
da sie Objekte sind und somit als Refernzen gehandhabt werden.
Um sie umzusetzen müsste man globale Variablen verwenden.
*/

void minmax(int data[], int anzahl, int &min, int &max)
{
    min = data[0];
    max = data[0];
    for (int i = 0; i < anzahl; i++)
    {
        if (data[i] < min)
        {
            min = data[i];
        }
        if (data[i] > max)
        {
            max = data[i];
        }
    }
}
