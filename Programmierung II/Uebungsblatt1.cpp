#include <iostream>

using namespace std;

void ausgabe(char);
void ausgabe(char *);
void ausgabe(char *, char);
void tauschen(int &, int &);
void minmax(int[], int, int, int);

int main()
{
    // int data[] = {4, 8, 23, -17, 2, -6};
    // int anzahl = sizeof(data) / sizeof(data[0]);
    // int min = 0, max = 0;
    // minmax(data, anzahl, min, max);
}

void ausgabe(char c)
{
    cout << "*****" << endl
         << "* " << c << " *" << endl
         << "*****" << endl;
}

void Ausgabe(char *s)
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

// save the min and max value in the two parameters min and max
void minmax(int data[], int anzahl, int min, int max)
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
    cout << "Min: " << min << endl;
    cout << "Max: " << max << endl;
}

// C++: Call by Reference
// Das & ist das Referenzzeichen
void tauschen(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}