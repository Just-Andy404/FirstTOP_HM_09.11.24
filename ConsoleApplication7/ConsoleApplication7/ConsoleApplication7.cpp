/*
������������ ������ � ���������� ���������� �� ��������� � �����, �� ������� ����� �������.
��������� ��������, � ������� ��� ����� �����
*/
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    double distance, time;

    cout << "������� ���������� �� ��������� (��): ";
    cin >> distance;
    cout << "������� �����, �� ������� ����� ������� (�): ";
    cin >> time;

    if (time == 0) {
        cout << "������: ����� �� ����� ���� ����� ����." << endl;
        return 1;
    }
    double speed = distance / time;

    cout << "����������� ��������: " << speed << " ��/�" << endl;

    return 0;
}
