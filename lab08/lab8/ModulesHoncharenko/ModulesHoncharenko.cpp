#include <cmath>
#include "ModulesHoncharenko.h"

double s_calculation(double x, double y, double z) {
    double part1 = z * std::sin(std::pow(x, 2) * y);
    double part2 = std::sqrt(std::abs(z - 12 * x)) / std::pow(y, 3);
    return part1 + part2;
}
