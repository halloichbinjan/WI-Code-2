#include <iostream>
using namespace std;
// bool equals(Bruch b1, Bruch b2){
//     if(b1.z / b1.n == b2.z == b2.n){
//         cout << "Die Brueche sind gleich." << endl;
//         return true;
//     }
//     else
//     {
//         cout << "Die Brueche sind ungleich." << endl;
//         return false;
//     }
// }
////------------------------------------------------------------////
void readRange(int &a, int start, int end)
{
    int input;
    do
    {
        cin >> input;
    } while (input < start || input > end);
    a = input;
}

int main()
{
    int a;
    readRange(a, 1, 10);
    cout << a << endl;
    return 0;
}