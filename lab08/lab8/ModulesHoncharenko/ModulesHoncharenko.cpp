#include <cmath>
#include "ModulesHoncharenko.h"

double s_calculation(double x, double y, double z) {
    double part1 = z * std::sin(std::pow(x, 2) * y);
    double part2 = std::sqrt(std::abs(z - 12 * x)) / std::pow(y, 3);
    return part1 + part2;
}

#include <string>

// --- Задача 9.1: Тариф на газ ---
double calcGasTariff(double volume) {
    if (volume <= 208.0) return volume * 1.299;
    else if (volume <= 500.0) return volume * 1.788;
    else return volume * 3.645;
}

// --- Задача 9.2: Розмір взуття ---
std::string convertShoeSize(double cm) {
    if (cm == 20.5) return "UK: 1 | UA: -";
    else if (cm == 21.0) return "UK: 1.5 | UA: -";
    else if (cm == 21.5) return "UK: 2 | UA: -";
    else if (cm == 22.0) return "UK: 2.5 | UA: -";
    else if (cm == 22.5) return "UK: 3 | UA: -";
    else if (cm == 23.0) return "UK: 4 | UA: 35";
    else if (cm == 23.5) return "UK: 4.5 | UA: 36";
    else if (cm == 24.0) return "UK: 5 | UA: 36.5";
    else if (cm == 24.5) return "UK: 5.5 | UA: 37";
    else if (cm == 25.0) return "UK: 6 | UA: 38";
    else if (cm == 25.5) return "UK: 6.5 | UA: 38/39";
    else if (cm == 26.0) return "UK: 7.5 | UA: 40.5";
    else if (cm == 26.5) return "UK: 8 | UA: 41";
    else if (cm == 27.0) return "UK: 8.5 | UA: 41.5";
    else if (cm == 27.5) return "UK: 9 | UA: 42";
    else if (cm == 28.0) return "UK: 9.5 | UA: 42/43";
    else if (cm == 28.5) return "UK: 10 | UA: 43";
    else if (cm == 29.0) return "UK: 11 | UA: 44";
    else if (cm == 29.5) return "UK: 11.5 | UA: 45";
    else if (cm == 30.0) return "UK: 12 | UA: 46";
    else if (cm == 30.5) return "UK: 12.5 | UA: 47";
    else if (cm == 31.0) return "UK: 13 | UA: 47.5";
    else if (cm == 31.5) return "UK: 14 | UA: 48";
    else if (cm == 32.0) return "UK: 14.5 | UA: 48.5";
    else return "Розмір не знайдено в таблиці";
}

// --- Задача 9.3: Біти числа N ---
int countBitsN(unsigned int N) {
    bool bit11 = (N >> 11) & 1; // Перевіряємо 11-й біт
    int count0 = 0, count1 = 0;

    for(int i = 0; i < 32; i++) {
        // Використовуємо тернарний оператор "? :" як сказано в умові
        ((N >> i) & 1) ? count1++ : count0++;
    }

    return bit11 ? count0 : count1;
}
