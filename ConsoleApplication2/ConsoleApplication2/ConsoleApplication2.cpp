/*
������� �� ����� ���� "Every hunts wants..." ����� �������, ����� ������ ���� ���������
� ����� ������ � ��������������� ����������� ���������
*/

#include <iostream>
#include <windows.h>
using namespace std;

int main() {
	// �������� ���������� ���� �������
	HANDLE hwnd = GetStdHandle(STD_OUTPUT_HANDLE); 	
	// ������������� ������� ���� ������ � ������� ����� "Every"
	SetConsoleTextAttribute(hwnd, FOREGROUND_RED); 
	cout << "Every\n";
	// ������������� ������ ���� ������ (������� + �������) � ������� ����� "hunter"
	SetConsoleTextAttribute(hwnd, FOREGROUND_RED | FOREGROUND_GREEN);
	cout << "hunter\n";
	// ������������� ����� ������ ���� ������ � ������� "wants to"
	SetConsoleTextAttribute(hwnd, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "wants to\n";
	// ������������� ������� ���� ������ � ������� "know"
	SetConsoleTextAttribute(hwnd, FOREGROUND_GREEN);
	cout << "know\n";
	// ������������� ���� ��������� (������� + ����� + �������) � ������� "where"
	SetConsoleTextAttribute(hwnd, FOREGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_BLUE );
	cout << "where\n";
	// ������������� ����� ���� ������ � ������� "sits Description"
	SetConsoleTextAttribute(hwnd, FOREGROUND_BLUE);
	cout << "sits Description\n";
	// ������������� ��������� ���� ������ (������� + �����) � ������� "the pheasant"
	SetConsoleTextAttribute(hwnd, FOREGROUND_BLUE | FOREGROUND_RED);
	cout << "the pheasant\n";
	return 0;
}