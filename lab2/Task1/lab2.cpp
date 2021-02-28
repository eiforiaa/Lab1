
#include <iostream>
using namespace std;
double x, y;

bool isFunc(double x, double y)
{
    return ((x >= 0 != 0 && x <= 1 != 0 && y >= 0 != 0 && y <= 1 != 0 && x*x+y*y <=1 )||(x <= 0 != 0 && x>= -1 && y <= 0 && y >= -1));
}

int main()
{
    cin >> x >> y;
    bool a = isFunc(x, y);
 
    cout << a;
  

    return 0;
}

