#include "ModulesHoncharenko.h"
#include <fstream>
#include <vector>
#include <bitset>
#include <ctime>

using namespace std;

double s_calculation(double x, double y, double z) {
    return x + y + z;
}

void Task10_1(const string& inFileName, const string& outFileName) {
    ifstream fin(inFileName);
    ofstream fout(outFileName);

    if (!fin.is_open() || !fout.is_open()) return;

    fout << "Розробник модуля: Гончаренко Аліса\n";
    fout << "Установа: ЦНТУ\n";
    fout << "Місто: Кропивницький, Україна\n";
    fout << "Рік розробки: 2026\n";
    fout << "-----------------------------------\n";

    vector<string> paragraphs;
    string line;
    bool isUkrainian = false;

    while (getline(fin, line)) {
        paragraphs.push_back(line);
        for (char c : line) {
            if ((unsigned char)c > 127) isUkrainian = true;
        }
    }

    if (isUkrainian) {
        fout << "Текст у вхідному файлі належить до української мови.\n";
    } else {
        fout << "Текст у вхідному файлі належить до англійської мови.\n";
    }
    fout << "-----------------------------------\n";

    for (int i = paragraphs.size() - 1; i >= 0; --i) {
        fout << paragraphs[i] << "\n";
    }

    fout << "-----------------------------------\n";

    fin.close();
    fout.close();
}

void Task10_2(const string& inFileName, const string& outFileName) {
    ifstream fin(inFileName);
    ofstream fout(outFileName, ios::app);

    if (!fin.is_open() || !fout.is_open()) return;

    char ch;
    int commaCount = 0;
    int dotCount = 0;

    while (fin.get(ch)) {
        if (ch == ',') commaCount++;
        if (ch == '.') dotCount++;
    }

    time_t now = time(0);
    char* dt = ctime(&now);

    fout << "У вхідному файлі міститься " << commaCount << " ком та " << dotCount << " крапок.\n";
    fout << "Дата й час дозапису інформації: " << dt;
    fout << "-----------------------------------\n";

    fin.close();
    fout.close();
}

void Task10_3(const string& outFileName, double x, double y, double z, unsigned int b) {
    ofstream fout(outFileName, ios::app);

    if (!fout.is_open()) return;

    double result = s_calculation(x, y, z);

    fout << "Результат виконання функції s_calculation: " << result << "\n";
    fout << "Число " << b << " у двійковому коді: " << bitset<16>(b) << "\n";

    fout.close();
}
