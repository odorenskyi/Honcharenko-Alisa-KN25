#include <iostream>
#include <fstream>
#include <string>
#include "../../Modules/Goncharenko.h"

using namespace std;

int main() {
    string filePath = __FILE__;
    if (filePath.find("Lab12\\prj") == string::npos && filePath.find("Lab12/prj") == string::npos) {
        ofstream outFile("../../TestSuite/TestResults.txt");
        if(outFile.is_open()) {
            outFile << "Встановлені вимоги порядку виконання лабораторної роботи порушено!\n";
            outFile.close();
        }
        cout << "УВАГА: Файл main.cpp знаходиться не в теці \\Lab12\\prj!\n";
        for(int i = 0; i < 100; ++i) {
            cout << '\a';
        }
        return 1;
    }

    ofstream report("../../TestSuite/TestResults.txt");
    if (!report.is_open()) {
        cout << "Помилка створення файлу звіту!\n";
        return 1;
    }

    report << "--- ПОЧАТОК ТЕСТУВАННЯ ---\n";

    ClassLab12_Goncharenko coin;

    report << "[Test 1] Перевірка ініціалізації за замовчуванням:\n";
    report << "Expected: Width=39, Height=29.2\n";
    report << "Result: Width=" << coin.getWidth() << ", Height=" << coin.getHeight() << "\n\n";

    report << "[Test 2] Перевірка розрахунку площі (S = PI * a * b):\n";
    report << "Expected Area: ~894.415\n";
    report << "Result: " << coin.getArea() << "\n\n";

    report << "[Test 3] Зміна атрибутів (валідація):\n";
    coin.setWidth(-10.0);
    report << "Action: setWidth(-10.0)\n";
    report << "Expected: Reject (Width remains 39)\n";
    report << "Result: Width=" << coin.getWidth() << "\n\n";

    coin.setWidth(50.0);
    coin.setHeight(40.0);
    report << "Action: setWidth(50.0), setHeight(40.0)\n";
    report << "Expected: Success\n";
    report << "Result Area: " << coin.getArea() << "\n\n";

    report << "--- ТЕСТУВАННЯ ЗАВЕРШЕНО ---\n";
    report.close();

    cout << "Тестування пройшло успішно. Результати записано у \\Lab12\\TestSuite\\TestResults.txt\n";

    return 0;
}
