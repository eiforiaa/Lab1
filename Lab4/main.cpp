#include "l4.h"

void main()
{
	setlocale(LC_ALL, "Rus");
	double r, phi, real, imaginary;
	cout << "Введите \"Комплексное число\" в виде:\n-модуль\n-аргумент\nчастей комплексного числа:\nr = ";
	cin >> r;
	cout << "Phi = ";
	cin >> phi;
	real = r * cos(phi * 180 / 3.14);
	imaginary = r * sin(phi * 180/3.14);
	Complex z(real, imaginary);
	cout << "Исходное z: \n z = " << z << endl;
	cout << "Искомое z: \n z= " << y(z);
}