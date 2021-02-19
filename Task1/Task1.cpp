

#include <iostream>
using namespace std;
#define _USE_MATH_DEFINES
#include <math.h>

int main()
{
    double f;
    double x = 5;
    f = pow(cos(3 / 8 * M_PI - x / 4), 2) - pow(cos(11 / 8 * M_PI - x / 4), 2);
    cout << f;
    cin >> x;
    cout << f;
}


