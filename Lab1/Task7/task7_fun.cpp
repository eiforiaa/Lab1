
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>


double x, result;
void fun() {
    result = pow(cos(3 / 8 * M_PI - x / 4), 2) - pow(cos(11 / 8 * M_PI - x / 4), 2);
}