#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double sin; // вхідний параметр (значення sin)
    double cos; // вхідний параметр (значення cos)
    double z1;       // результат обчислення 1-го виразу
    double z2;       // результат обчислення 2-го виразу

    cout << "sin = "; cin >> sin;
    cout << "cos = "; cin >> cos;

    // Виправлення формули для z1
    z1 = (pow(sin, 2) + pow(sin, 5) - pow(sin, 3)) / (cos * sin) + 1 - (2 * pow(sin, 2) * 2 * sin);

    // Виправлення формули для z2
    z2 = 2 * sin;

    cout << endl;
    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;

    cin.get();
    return 0;
}
