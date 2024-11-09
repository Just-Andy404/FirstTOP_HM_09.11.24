/*
Пользователь вводит с клавиатуры расстояние до аэропорта и время, за которое нужно доехать.
Вычислить скорость, с которой ему нужно ухать
*/
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    double distance, time;

    cout << "Введите расстояние до аэропорта (км): ";
    cin >> distance;
    cout << "Введите время, за которое нужно доехать (ч): ";
    cin >> time;

    if (time == 0) {
        cout << "Ошибка: время не может быть равно нулю." << endl;
        return 1;
    }
    double speed = distance / time;

    cout << "Необходимая скорость: " << speed << " км/ч" << endl;

    return 0;
}
