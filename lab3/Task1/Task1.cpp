#include <iostream>
using namespace std;

double summ(int n)
{
    double summ = 0;
    for (double i = 0; i <= n; i++)
    {
        summ += pow(-1, i) * pow(2,i) / (pow(i,(i+1)) + 1);
    }
    return summ;
}

void main()
{
    int n;
    cout << "Enter n= ";
    cin >> n;
    cout << "Summ= " << summ(n);
}