#include <iostream>
using namespace std;

class IntArray
{
private:
    int anz;
    int *data;

public:
    friend ostream &operator<<(ostream &out, const IntArray &a);
    IntArray();
    IntArray(int anzahl);
    IntArray(int *a, int anzahl);
    IntArray(const IntArray &a);
    ~IntArray();
    int getAnz() const;
    IntArray &operator=(const IntArray &a);
    int &operator[](int index) const;
    int operator==(const IntArray &a) const;
    int is(const IntArray &a) const;
};

ostream &operator<<(ostream &out, const IntArray &a)
{
    out << "[";
    for (int i = 0; i < a.anz; i++)
    {
        out << a.data[i];
        if (i < a.anz - 1)
        {
            out << ", ";
        }
    }
    out << "]";
    return out;
}

IntArray::IntArray()
{
    anz = 0;
    data = nullptr;
}

IntArray::IntArray(int anzahl)
{
    anz = anzahl;
    data = new int[anz];
    for (int i = 0; i < anz; i++)
    {
        data[i] = 0;
    }
}

IntArray::IntArray(int *a, int anzahl)
{
    anz = anzahl;
    data = new int[anz];
    for (int i = 0; i < anz; i++)
    {
        data[i] = a[i];
    }
}

IntArray::IntArray(const IntArray &a)
{
    anz = a.anz;
    data = new int[anz];
    for (int i = 0; i < anz; i++)
    {
        data[i] = a.data[i];
    }
}

IntArray::~IntArray()
{
    delete[] data;
}

int IntArray::getAnz() const
{
    return anz;
}

IntArray &IntArray::operator=(const IntArray &a)
{
    if (this != &a)
    {
        delete[] data;
        anz = a.anz;
        data = new int[anz];
        for (int i = 0; i < anz; i++)
        {
            data[i] = a.data[i];
        }
    }
    return *this;
}

int &IntArray::operator[](int index) const
{
    if (index < 0 || index >= anz)
    {
        cout << "Index out of bounds" << endl;
        exit(1);
    }
    return data[index];
}

int IntArray::operator==(const IntArray &a) const
{
    if (anz != a.anz)
    {
        return 0;
    }
    for (int i = 0; i < anz; i++)
    {
        if (data[i] != a.data[i])
        {
            return 0;
        }
    }
    return 1;
}

int IntArray::is(const IntArray &a) const
{
    return this == &a;
}