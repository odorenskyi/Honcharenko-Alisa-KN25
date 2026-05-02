#include <iostream>
#include <string>
#include <windows.h>
#include "ModulesHoncharenko.h"

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string inputFile = "../../TestSuite/input.txt";
    string outputFile = "../../TestSuite/ВхФайл.txt";

    cout << "Починаю тестування модулів..." << endl;

    Task10_1(inputFile, outputFile);
    Task10_2(inputFile, outputFile);

    double x = 1.5, y = 2.0, z = 3.2;
    unsigned int b = 9;
    Task10_3(outputFile, x, y, z, b);

    cout << "Тестування завершено! Перевір папку TestSuite." << endl;

    return 0;
}
