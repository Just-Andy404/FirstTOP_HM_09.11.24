/*
������������ ������ � ���������� ����������, ������ ������� �� 100 �� � ��������� ���� 
����� �������. ������� �� ����� ������������� ������� �� ���������� ������� �� ������ 
����� �������
*/

#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    double distance, fuelConsumption;
    double price1, price2, price3;

    // ���� ������ �� ������������
    cout << "������� ���������� (��): ";
    cin >> distance;
    cout << "������� ������ ������� �� 100 ��: ";
    cin >> fuelConsumption;
    cout << "������� ��������� ������� ���� �������: ";
    cin >> price1;
    cout << "������� ��������� ������� ���� �������: ";
    cin >> price2;
    cout << "������� ��������� �������� ���� �������: ";
    cin >> price3;

    // ������ ��������� ������� ��� ������� ���� �������
    double cost1 = (distance / 100.0) * fuelConsumption * price1;
    double cost2 = (distance / 100.0) * fuelConsumption * price2;
    double cost3 = (distance / 100.0) * fuelConsumption * price3;

    // ����� ������������� �������
    cout << "\n��������� ������� �� ������ ����� �������:\n";
    cout << "��� �������\t��������� �������\n";
    cout << "������\t\t" << cost1 << " ���." << endl;
    cout << "������\t\t" << cost2 << " ���." << endl;
    cout << "������\t\t" << cost3 << " ���." << endl;

    return 0;
}
