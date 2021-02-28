
#include <iostream>
using namespace std;
double x, y;

bool isEqual(double x, double y)
{
    return ((x >= 0 != 0 && x <= 1 != 0 && y >= 0 != 0 && y <= 1 != 0 && x*x+y*y <=1 )||(x <= 0 != 0 && x>= -1 && y <= 0 && y >= -1));; // оператор == возвращает true, если x равно y, в противном случае - false 
}

int main()
{
    cin >> x >> y;
    bool a = isEqual(x, y);
   /* bool res = ((x >= 0 != 0 && x <= 1 != 0 && y >= 0 != 0 && y <= 1 != 0 && x*x+y*y <=1 )||(x <= 0 != 0 && x>= -1 && y <= 0 && y >= -1));*/
    cout << a;
  

    return 0;
}

