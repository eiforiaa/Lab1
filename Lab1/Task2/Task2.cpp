

#include <iostream>
using namespace std;
#define _USE_MATH_DEFINES
#include <math.h>

double f(double x) {

    return pow(cos(3 / 8 * M_PI - x / 4), 2) - pow(cos(11 / 8 * M_PI - x / 4), 2);
    
}

void main()
{
    double x, fun;
    cin >> x;
    fun = f(x);
    cout << fun;
   
}




