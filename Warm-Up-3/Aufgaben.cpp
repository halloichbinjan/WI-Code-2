#include <iostream>
using namespace std;

// int Bruch::equals(Bruch other)
// {
//     if (this->z * b2.n == this->n * b2.z)
//     {
//         cout << "Die Brueche sind gleich." << endl;
//         return 1;
//     }
//     else
//     {
//         cout << "Die Brueche sind ungleich." << endl;
//         return 0;
//     }
// }

////------------------------------------------------------------////
void readRange(int &a, int start, int end)
{
    int input;
    do
    {
        cout << "Bitte geben Sie eine Zahl zwischen " << start << " und " << end << " ein: ";
        cin >> input;
    } while (input < start || input > end);
    a = input;
}

int main()
{
    int a;
    readRange(a, 1, 10);
    cout << "Die Zahl ist nun: " << a << endl;
    return 0;
}