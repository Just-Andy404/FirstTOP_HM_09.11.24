/*
По заданной длине окружности найти площядь круга по формуле S = pi*R2, 
радиус вычислить из формулы длины окружности: L = 2* pi*R

Примичание pi = 3.14
*/

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    const double pi = 3.14;
    double L, R, S;

    cout << "Введите длину окружности: ";
    cin >> L;

    R = L / (2 * pi);

    S = pi * R * R;

    cout << "Площадь круга: " << S << endl;

    return 0;

}