

#include <iostream>
using namespace std;
#define _USE_MATH_DEFINES
#include <math.h>
double fun(double x);

void main()
{
    double x;
    cin >> x;
    cout << fun(x);

}
double fun(double x) {


    return pow(cos(3 / 8 * M_PI - x / 4), 2) - pow(cos(11 / 8 * M_PI - x / 4), 2);

}

