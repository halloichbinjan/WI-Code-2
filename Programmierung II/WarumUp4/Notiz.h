#ifndef NOTIZ_H
#define NOTIZ_H
#include <stdlib.h>
using namespace std;

class Notiz
{
private:
    int nr;
    char titel[80];
    char *text;

public:
    Notiz();
    Notiz(int, const char *, const char *);
    Notiz(const Notiz &);
    void ausgabe() const;
}; // end class Notiz

#endif