// Командный проект. Группа ПИ-51.
// Команда: Мишустин (в. 20), Майстренко (в. 22, техлид).

#include <iostream>

// === БЛОК ПОДКЛЮЧЕНИЙ ===
#include "Maistrenko.h"
#include "mishustin.h"
// === КОНЕЦ БЛОКА ПОДКЛЮЧЕНИЙ ===

using namespace std;

int main() {
    int choice;
    double v0, a, t;        // для функций техлида
    double a_pyr, h;        // для пирамиды (Мишустин)

    do {
        cout << "\n=== Командный проект: сборник расчётов ===\n";

        // === БЛОК МЕНЮ ===
        cout << "1. Конечная скорость (вариант 22)\n";
        cout << "2. Перемещение (вариант 22)\n";
        cout << "3. Объём пирамиды (вариант 20)\n";
        cout << "4. Апофема пирамиды (вариант 20)\n";
        // === КОНЕЦ БЛОКА МЕНЮ ===

        cout << "0. Выход\n";
        cout << "Выберите пункт: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Введите начальную скорость (v0), ускорение (a) и время (t): ";
            cin >> v0 >> a >> t;
            cout << "Конечная скорость = " << finalSpeed(v0, a, t) << " м/с\n";
            break;

        case 2:
            cout << "Введите начальную скорость (v0), ускорение (a) и время (t): ";
            cin >> v0 >> a >> t;
            cout << "Перемещение = " << displacement(v0, a, t) << " м\n";
            break;

        case 3:
            cout << "Введите сторону основания a и высоту h: ";
            cin >> a_pyr >> h;
            if (a_pyr <= 0 || h <= 0) {
                cout << "Ошибка: a и h должны быть положительными.\n";
                break;
            }
            cout << "Объём = " << pyramidVolume(a_pyr, h) << " куб. ед.\n";
            break;

        case 4:
            cout << "Введите сторону основания a и высоту h: ";
            cin >> a_pyr >> h;
            if (a_pyr <= 0 || h <= 0) {
                cout << "Ошибка: a и h должны быть положительными.\n";
                break;
            }
            cout << "Апофема = " << pyramidApothem(a_pyr, h) << " ед.\n";
            break;

        case 0:
            cout << "Работа завершена.\n";
            break;

        default:
            cout << "Такого пункта нет.\n";
        }
    } while (choice != 0);

    return 0;
}