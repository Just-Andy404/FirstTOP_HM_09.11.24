/*
ѕользователь вводит с клавиатуры врем€ начала и врем€ запершени€ телефонного разговора
(часы, минуты и секунды). ѕосчитать стоимость разговора, если чтоимость минуты - 30 копеек
*/
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int startHours, startMinutes, startSeconds;
    int endHours, endMinutes, endSeconds;

    cout << "¬ведите врем€ начала (часы, минуты, секунды): " << endl;
    cin >> startHours >> startMinutes >> startSeconds;

    cout << "¬ведите врем€ окончани€ (часы, минуты, секунды): " << endl;
    cin >> endHours >> endMinutes >> endSeconds;

    int startTimeInSeconds = startHours * 3600 + startMinutes * 60 + startSeconds;
    int endTimeInSeconds = endHours * 3600 + endMinutes * 60 + endSeconds;

    int durationInSeconds = endTimeInSeconds - startTimeInSeconds;

    int durationInMinutes = (durationInSeconds + 59) / 60; 

    int cost = durationInMinutes * 30; 

    cout << "—тоимость звонка составл€ет: " << cost << " копеек." << endl;

	return 0;
}