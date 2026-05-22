#ifndef MODULES_GONCHARENKO_H
#define MODULES_GONCHARENKO_H

#include <iostream>
#include <cmath>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

class ClassLab12_Goncharenko {
private:
    double width;
    double height;

public:
    ClassLab12_Goncharenko(double w = 39.0, double h = 29.2);

    double getWidth() const;
    double getHeight() const;

    bool setWidth(double w);
    bool setHeight(double h);

    double getArea() const;
};

ClassLab12_Goncharenko::ClassLab12_Goncharenko(double w, double h) {
    if (!setWidth(w)) width = 39.0;
    if (!setHeight(h)) height = 29.2;
}

double ClassLab12_Goncharenko::getWidth() const {
    return width;
}

double ClassLab12_Goncharenko::getHeight() const {
    return height;
}

bool ClassLab12_Goncharenko::setWidth(double w) {
    if (w > 0) {
        width = w;
        return true;
    }
    return false;
}

bool ClassLab12_Goncharenko::setHeight(double h) {
    if (h > 0) {
        height = h;
        return true;
    }
    return false;
}

double ClassLab12_Goncharenko::getArea() const {
    double a = width / 2.0;
    double b = height / 2.0;
    return M_PI * a * b;
}

#endif
