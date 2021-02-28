#include <iostream>
using namespace std;
double x, y, res;
bool isFunc(double x, double y)
{
	return ((x >= 0 != 0 && x <= 1 != 0 && y >= 0 != 0 && y <= 1 != 0 && x * x + y * y <= 1) || (x <= 0 != 0 && x >= -1 && y <= 0 && y >= -1 != 0));
}
void Task1()
{
	cin >> x >> y;
	bool a = isFunc(x, y);
	cout << a;
	
}
double f(double x)
{
	if (x <= 3)
		res = x * x - 3 * x + 9;
	else
		res = 1 / (x * x * x + 6);

	return res;
	
}
void Task2()
{
	double x;
	cin >> x;
	cout << f(x);
}