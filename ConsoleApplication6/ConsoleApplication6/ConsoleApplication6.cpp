/*
��������� ���������� ���������� ��� ������������� ��������������� ��������
�� ������� S = v * t + (a * t * t) / 2
*/
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double v, t, a;
	cout << "Enter speed: ";
	cin >> v;
	cout << "Enter time: ";
	cin >> t;
	cout << "Enter boost: ";
	cin >> a;

	double S = v * t + (a * t * t) / 2;


	cout << "���������� ����������: " << S << endl;
	return 0;
}
