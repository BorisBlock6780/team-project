#include "mishustin.h"
#include <math.h>

// Объём пирамиды: V = a^2 * h / 3
double pyramidVolume(double a, double h) {
    return a * a * h / 3.0;
}

// Апофема: m = sqrt(h^2 + (a/2)^2)
double pyramidApothem(double a, double h) {
    return sqrt(h * h + (a / 2.0) * (a / 2.0));
}

