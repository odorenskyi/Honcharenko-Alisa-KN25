#include <iostream>
#include <string>
#include <windows.h>
#include "ModulesHoncharenko.h"

using namespace std;

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    cout << "--- Тестування функцii calcGasTariff (Задача 9.1) ---" << endl;
    double gasInput = 100.0;
    double expectedGas = 100.0 * 1.299;
    cout << "Вхiднi данi: об'єм " << gasInput << endl;
    cout << "Очiкуваний результат: " << expectedGas << endl;
    double actualGas = calcGasTariff(gasInput);
    cout << "Фактичний результат: " << actualGas << endl;
    if (actualGas == expectedGas) cout << "Статус: PASSED" << endl << endl;
    else cout << "Статус: FAILED" << endl << endl;

    cout << "--- Тестування функцii convertShoeSize (Задача 9.2) ---" << endl;
    double shoeInput = 24.5;
    string expectedShoe = "UK: 5.5 | UA: 37";
    cout << "Вхiднi данi (см): " << shoeInput << endl;
    cout << "Очiкуваний результат: " << expectedShoe << endl;
    string actualShoe = convertShoeSize(shoeInput);
    cout << "Фактичний результат: " << actualShoe << endl;
    if (actualShoe == expectedShoe) cout << "Статус: PASSED" << endl << endl;
    else cout << "Статус: FAILED" << endl << endl;

    cout << "--- Тестування функцii countBitsN (Задача 9.3) ---" << endl;
    unsigned int bitInput = 10;
    int expectedBits = 2;
    cout << "Вхiднi данi (N): " << bitInput << endl;
    cout << "Очiкуваний результат: " << expectedBits << endl;
    int actualBits = countBitsN(bitInput);
    cout << "Фактичний результат: " << actualBits << endl;
    if (actualBits == expectedBits) cout << "Статус: PASSED" << endl << endl;
    else cout << "Статус: FAILED" << endl << endl;

    return 0;
}
