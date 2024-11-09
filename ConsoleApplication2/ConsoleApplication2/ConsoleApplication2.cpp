/*
Вывести на экран стих "Every hunts wants..." таким образом, чтобы каждый цвет начинался
с новой строки и соотеветсвующим количеством табуляции
*/

#include <iostream>
#include <windows.h>
using namespace std;

int main() {
	// Получаем дескриптор окна консоли
	HANDLE hwnd = GetStdHandle(STD_OUTPUT_HANDLE); 	
	// Устанавливаем красный цвет текста и выводим слово "Every"
	SetConsoleTextAttribute(hwnd, FOREGROUND_RED); 
	cout << "Every\n";
	// Устанавливаем желтый цвет текста (красный + зеленый) и выводим слово "hunter"
	SetConsoleTextAttribute(hwnd, FOREGROUND_RED | FOREGROUND_GREEN);
	cout << "hunter\n";
	// Устанавливаем яркий желтый цвет текста и выводим "wants to"
	SetConsoleTextAttribute(hwnd, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "wants to\n";
	// Устанавливаем зеленый цвет текста и выводим "know"
	SetConsoleTextAttribute(hwnd, FOREGROUND_GREEN);
	cout << "know\n";
	// Устанавливаем цвет бирюзовый (зеленый + синий + яркость) и выводим "where"
	SetConsoleTextAttribute(hwnd, FOREGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_BLUE );
	cout << "where\n";
	// Устанавливаем синий цвет текста и выводим "sits Description"
	SetConsoleTextAttribute(hwnd, FOREGROUND_BLUE);
	cout << "sits Description\n";
	// Устанавливаем пурпурный цвет текста (красный + синий) и выводим "the pheasant"
	SetConsoleTextAttribute(hwnd, FOREGROUND_BLUE | FOREGROUND_RED);
	cout << "the pheasant\n";
	return 0;
}