#include <cstring>;

class ZSchach
{
private:
    char *schachbrett[8][8];
    int naechsterSpieler;

public:
    void besetzeFeld(int, int, char *);
    ZSchach();
};

ZSchach::ZSchach()
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            schachbrett[i][j] = " ";
        }
    }
    naechsterSpieler = 1;
}

void ZSchach::besetzeFeld(int x, int y, char *figur)
{
    schachbrett[x][y] = figur;

    if (naechsterSpieler == 1)
    {
        naechsterSpieler = 2;
    }
    else
    {
        naechsterSpieler = 1;
    }
}