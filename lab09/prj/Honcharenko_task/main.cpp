#include <iostream>
#include <string>
#include <windows.h>
#include "ModulesHoncharenko.h"

using namespace std;

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    char choice, exitChoice;

    do {
        cout << "\n=== Головне меню (Задача 9.4) ===" << endl;
        cout << "Введiть символ для виклику функцiї:" << endl;
        cout << " 'u' - s_calculation" << endl;
        cout << " 't' - Тариф на газ" << endl;
        cout << " 'r' - Розмiр взуття" << endl;
        cout << " 'e' - Пiдрахунок бiтiв" << endl;
        cout << "Ваш вибiр: ";
        cin >> choice;

        switch (choice) {
            case 'u': {
                double x, y, z;
                cout << "Введiть x, y, z: ";
                cin >> x >> y >> z;
                cout << "Результат: " << s_calculation(x, y, z) << endl;
                break;
            }
            case 't': {
                double vol;
                cout << "Введiть об'єм: ";
                cin >> vol;
                cout << "Сума: " << calcGasTariff(vol) << endl;
                break;
            }
            case 'r': {
                double cm;
                cout << "Введiть см: ";
                cin >> cm;
                cout << "Вiдповiднiсть: " << convertShoeSize(cm) << endl;
                break;
            }
            case 'e': {
                unsigned int n;
                cout << "Введiть N: ";
                cin >> n;
                cout << "Результат: " << countBitsN(n) << endl;
                break;
            }
            default:
                cout << "\a";
                cout << "Помилка!" << endl;
                break;
        }

        cout << "\nПродовжити? (будь-який символ), Вихiд - 'w' або 'i': ";
        cin >> exitChoice;

    } while (exitChoice != 'w' && exitChoice != 'i');

    return 0;
}
