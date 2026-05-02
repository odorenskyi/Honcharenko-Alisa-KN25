#include <iostream>
#include <iomanip>
#include <string>
#include "ModulesHoncharenko.h"

using namespace std;

// 8.2.1
string getDeveloperInfo() {
    return "Honcharenko Alisa (C)";
}

// 8.2.2
bool checkLogic(char a, char b) {
    return (a + 1) == (b + 2);
}

int main() {
    double x, y, z;
    char a, b;

    cout << "Enter x, y, z: ";
    cin >> x >> y >> z;

    cout << "Enter characters a, b: ";
    cin >> a >> b;

    cout << "\n================ RESULTS ================\n";
    cout << "8.2.1 Developer: " << getDeveloperInfo() << endl;
    cout << "8.2.2 Logic result: " << boolalpha << checkLogic(a, b) << endl;

    cout << "8.2.3 Values:\n";
    cout << "  x = " << dec << x << " (dec) | " << hex << (int)x << " (hex)" << endl;
    cout << "  y = " << dec << y << " (dec) | " << hex << (int)y << " (hex)" << endl;
    cout << "  z = " << dec << z << " (dec) | " << hex << (int)z << " (hex)" << endl;

    cout << dec;
    cout << "\n  Result S = " << s_calculation(x, y, z) << endl;
    cout << "=========================================\n";

    return 0;
}
