/*
������ ��� ������������� R1, R2, R3. ��������� �������� ������������� R0 �� �������:
1/R0 = 1/R1+1/R2+1/R3
*/

#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double R1, R2, R3;

    cout << "������� ������������� R1: ";
    cin >> R1;
    cout << "������� ������������� R2: ";
    cin >> R2;
    cout << "������� ������������� R3: ";
    cin >> R3;

    double R0 = 1/(1 / R1 + 1 / R2 + 1 / R3);

    printf("%.3f", R0);
	return 0;
}
