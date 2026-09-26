#include "Maistrenko.h"
#include <cmath>
// Конечная скорость: v = v0 + a * t
double finalSpeed(double v0, double a, double t) {
	return v0 + a * t;
}

// Перемещение: s = v0 * t + (a * t^2) / 2
double displacement(double v0, double a, double t) {
	return v0 * t + (a * t * t) / 2.0;
}
