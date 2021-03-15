#include <iostream>
using namespace std;
void task1();
void task2();
void task3();
void task4();
void task5();
int main()
{
	int number;
	setlocale(LC_CTYPE, "rus");
	while (true)
	{
		system("cls");
		cout << "Меню ЛР3 циклы Do While" << endl
			<< "[1] Задание 1 " << endl
			<< "[2] Задание 2 " << endl
			<< "[3] Задание 3 " << endl
			<< "[4] Задание 4 " << endl
			<< "[5] Задание 5 " << endl
			<< "[6] Выход " << endl
			<< "Введите номер подпункта: ";
		cin >> number;
		switch (number)
		{
		case 1:
		{
			system("cls");
			task1();
			cout << endl;
			system("pause");
			break;
		}
		case 2:
		{
			system("cls");
			task2();
			cout << endl;
			system("pause");
			break;
		}
		case 3:
		{
			system("cls");
			task3();
			cout << endl;
			system("pause");
			break;
		}
		case 4:
		{
			system("cls");
			task4();
			cout << endl;
			system("pause");
			break;
		}
		case 5:
		{
			system("cls");
			task5();
			cout << endl;
			system("pause");
			break;
		}
		case 6:
		{
			return true;
		}
		}
	}
}
