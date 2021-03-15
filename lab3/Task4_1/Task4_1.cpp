#include <iostream>
using namespace std;
int findFirstElement(double eps)
{  
    double count = 0;
    double i;
    for (i = 0; ; i++)
    {
        count = pow(-1, i) * pow(2, i) / (pow(i, (i + 1)) + 1);
        if (abs(count) < eps)
        {
            break;
        }
    }
    return i+1;
}
void main()
{
    double eps;
    cout << "Enter eps= ";
    cin >> eps;
    cout << "Number= " << findFirstElement(eps);
}