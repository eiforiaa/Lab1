#include <iostream>
using namespace std;
double summ2(double eps)
{
    int i = 0;
    double summ = pow(-1, i) * pow(2, i) / (pow(i, (i + 1)) + 1);
    for (int i =1;abs(summ) > eps; i++)
    {
        summ += pow(-1, i) * pow(2, i) / (pow(i, (i + 1)) + 1);
        i++;            
     
    }  return summ;
}
void main()
{
    double eps;
    cout << "Enter eps= ";
    cin >> eps;
    cout << "Summ= " << summ2(eps);
}