/*
������������ ������ � ���������� ����� ������ � ����� ���������� ����������� ���������
(����, ������ � �������). ��������� ��������� ���������, ���� ��������� ������ - 30 ������
*/
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int startHours, startMinutes, startSeconds;
    int endHours, endMinutes, endSeconds;

    cout << "������� ����� ������ (����, ������, �������): " << endl;
    cin >> startHours >> startMinutes >> startSeconds;

    cout << "������� ����� ��������� (����, ������, �������): " << endl;
    cin >> endHours >> endMinutes >> endSeconds;

    int startTimeInSeconds = startHours * 3600 + startMinutes * 60 + startSeconds;
    int endTimeInSeconds = endHours * 3600 + endMinutes * 60 + endSeconds;

    int durationInSeconds = endTimeInSeconds - startTimeInSeconds;

    int durationInMinutes = (durationInSeconds + 59) / 60; 

    int cost = durationInMinutes * 30; 

    cout << "��������� ������ ����������: " << cost << " ������." << endl;

	return 0;
}