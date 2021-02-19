#include <iostream>
using namespace std;
#define _USE_MATH_DEFINES
#include <math.h>
void fun();
extern double x, result;
void main()
{
    cin >> x;
    fun();
    cout << result;
}
