/*
пользователь вводит с клавиатуры расстояние, расход бензина на 100 км и стоимость трех 
видов бензина. Вывести на экран сравнительную таблицу со стоимостью поездки на разных 
видах бензина
*/

#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    double distance, fuelConsumption;
    double price1, price2, price3;

    // Ввод данных от пользователя
    cout << "Введите расстояние (км): ";
    cin >> distance;
    cout << "Введите расход бензина на 100 км: ";
    cin >> fuelConsumption;
    cout << "Введите стоимость первого вида бензина: ";
    cin >> price1;
    cout << "Введите стоимость второго вида бензина: ";
    cin >> price2;
    cout << "Введите стоимость третьего вида бензина: ";
    cin >> price3;

    // Расчет стоимости поездки для каждого вида бензина
    double cost1 = (distance / 100.0) * fuelConsumption * price1;
    double cost2 = (distance / 100.0) * fuelConsumption * price2;
    double cost3 = (distance / 100.0) * fuelConsumption * price3;

    // Вывод сравнительной таблицы
    cout << "\nСтоимость поездки на разных видах бензина:\n";
    cout << "Вид бензина\tСтоимость поездки\n";
    cout << "Первый\t\t" << cost1 << " руб." << endl;
    cout << "Второй\t\t" << cost2 << " руб." << endl;
    cout << "Третий\t\t" << cost3 << " руб." << endl;

    return 0;
}
