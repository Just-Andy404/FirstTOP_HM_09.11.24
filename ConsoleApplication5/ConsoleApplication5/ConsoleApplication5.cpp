/*
�� �������� ����� ���������� ����� ������� ����� �� ������� S = pi*R2, 
������ ��������� �� ������� ����� ����������: L = 2* pi*R

���������� pi = 3.14
*/

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    const double pi = 3.14;
    double L, R, S;

    cout << "������� ����� ����������: ";
    cin >> L;

    R = L / (2 * pi);

    S = pi * R * R;

    cout << "������� �����: " << S << endl;

    return 0;

}