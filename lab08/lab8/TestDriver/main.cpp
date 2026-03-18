#include <iostream>
#include <cmath>
#include "ModulesHoncharenko.h" // Підключаємо твою бібліотеку

using namespace std;

int main() {
    cout << "--- Unit Testing s_calculation ---" << endl;

    // Задаємо значення для перевірки (x, y, z)
    double x = 1.0;
    double y = 2.0;
    double z = 3.0;

    // Очікуваний результат (пораховано заздалегідь за формулою 11 варіанта)
    double expected = 3.10289;

    // Викликаємо функцію з твоєї бібліотеки!
    double actual = s_calculation(x, y, z);

    cout << "Input: x=" << x << ", y=" << y << ", z=" << z << endl;
    cout << "Expected: ~" << expected << endl;
    cout << "Actual:   " << actual << endl;

    // Перевіряємо, чи збігається результат
    if (abs(expected - actual) < 0.01) {
        cout << "Status: PASSED" << endl;
    } else {
        cout << "Status: FAILED" << endl;
    }

    return 0;
}
