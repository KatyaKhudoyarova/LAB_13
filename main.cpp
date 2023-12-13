/*#include <iostream>

using namespace std;

int main() {
    int startHours, startMinutes, elapsedMinutes;

    // Введення початкового часу
    cout << "Enter the starting time (hours and minutes): ";
    cin >> startHours >> startMinutes;

    // Перевірка на від'ємні значення
    if (startHours < 0 || startMinutes < 0) {
        cout << "Invalid input! Hours and minutes should be non-negative." << endl;
        return 1; // Помилковий вихід з програми
    }

    // Введення кількості пройдених хвилин
    cout << "Enter the elapsed time in minutes: ";
    cin >> elapsedMinutes;

    // Перевірка на від'ємне значення
    if (elapsedMinutes < 0) {
        cout << "Invalid input! Elapsed time should be non-negative." << endl;
        return 1; // Помилковий вихід з програми
    }

    // Обчислення загальної кількості хвилин
    int totalMinutes = startHours * 60 + startMinutes + elapsedMinutes;

    // Обчислення годин та хвилин
    int hours = (totalMinutes / 60) % 24; // Обмеження до 24 годин
    int minutes = totalMinutes % 60;

    // Виведення нового часу
    cout << "Time after " << elapsedMinutes << " minutes: ";
    if (hours < 10) {
        cout << "0";
    }
    cout << hours << ":";
    if (minutes < 10) {
        cout << "0";
    }
    cout << minutes << endl;

    return 0;
}*/
#include <iostream>

using namespace std;

int main() {
    int startHours, startMinutes, endHours, endMinutes;

    // Введення часу початку події
    cout << "Enter the starting time (hours and minutes): ";
    cin >> startHours >> startMinutes;

    // Перевірка на від'ємні значення
    if (startHours < 0 || startHours > 24 || startMinutes < 0 || startMinutes >= 60) {
        cout << "Invalid input for starting time!" << endl;
        return 1; // Помилковий вихід з програми
    }

    // Введення часу завершення події
    cout << "Enter the ending time (hours and minutes): ";
    cin >> endHours >> endMinutes;

    // Перевірка на від'ємні значення
    if (endHours < 0 || endHours > 24 || endMinutes < 0 || endMinutes >= 60) {
        cout << "Invalid input for ending time!" << endl;
        return 1; // Помилковий вихід з програми
    }

    // Обчислення тривалості події
    int totalStartMinutes = startHours * 60 + startMinutes;
    int totalEndMinutes = endHours * 60 + endMinutes;

    // Перевірка на від'ємне значення часу
    if (totalStartMinutes > totalEndMinutes) {
        totalEndMinutes += 24 * 60; // Додаємо 24 години до кінцевого часу
    }

    // Обчислення тривалості
    int duration = totalEndMinutes - totalStartMinutes;

    // Обчислення годин та хвилин тривалості
    int durationHours = duration / 60;
    int durationMinutes = duration % 60;

    // Виведення тривалості події
    cout << "Duration of the event: " << durationHours << " hours and " << durationMinutes << " minutes." << endl;

    return 0;
}

