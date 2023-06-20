#include <cstring>
#include "Notiz.h"
using namespace std;

Notiz::Notiz(int _nr, const char *_titel, const char *_text)
{
    this->nr = _nr;

    strcpy(this->titel, _titel);

    text = new char[strlen(_text) + 1];
    strcpy(text, _text);
}

Notiz &Notiz::operator=(const Notiz _other)
{
    this->nr = _other.nr;

    strcpy(this->titel, _other.titel);

    delete[] text;
    text = new char[strlen(_other.text) + 1];
    strcpy(text, _other.text);

    return *this;
}

Notiz Notiz::operator+(const Notiz _other)
{
    int length = strlen(_other.text) + strlen(this->text) + 1;

    char *newText = new char[length];
    strcpy(newText, this->text);
    strcat(newText, _other.text);
    return Notiz(0, "Neue Notiz", newText);
}

bool Notiz::sameText(Notiz _other)
{
    if (strcmp(this->text, _other.text) == 0)
    {
        return true;
    }
    return false;
}

// obj2 = obj1 ;
// obj2.operator=(obj1);