#include <iostream>
using namespace std;
double summ(int n)
{
	double i = 0;
	double summ=0;
	do
	{
		summ += pow(-1, i) * pow(2, i) / (pow(i, (i + 1)) + 1);
		i++;
	} while (i <= n);
	return summ;
}
void main()
{
	int n;
	cout << "Enter n= ";
	cin >> n;
	cout << "Summ= " << summ(n);
}