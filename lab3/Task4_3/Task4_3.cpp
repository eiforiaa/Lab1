#include <iostream>
using namespace std;
int findFirstElement(double eps)
{

    double count = 0;
    double i = 0;
    do
    {
        count = pow(-1, i) * pow(2, i) / (pow(i, (i + 1)) + 1);
        i++;
        if (abs(count) < eps)
        {
            break;
        }
    } while (true);
    return i;
}
void main()
{
    double eps;
    cout << "Enter eps= ";
    cin >> eps;
    cout << "Number= " << findFirstElement(eps);
}