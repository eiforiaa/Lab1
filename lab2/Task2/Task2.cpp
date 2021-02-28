// Task2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

using namespace std;
#include <iostream>
double res, x;
double f(double x) {
    cin >> x;
    if (x <= 3) 
        res = x * x - 3 * x + 9;
    else 
       res =  1 / (x * x * x + 6);
    
    return res;
}

int main()
{
    double m = f(x);
    cout << m;
    
}


