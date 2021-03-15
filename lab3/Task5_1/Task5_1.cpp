#include <iostream>
using namespace std;
int findFirstNegativeElement(double eps)
{
    double count = 0;
    int i;
    for (i = 0; ; i++)
    {
        count = pow(-1, i) * pow(2, i) / (pow(i, (i + 1)) + 1);
        if (abs(count) < eps && count < 0)
        {
            return i+1;
        }
    }
}
void main()
{
    double eps;
    cout << "Enter eps= ";
    cin >> eps;
    cout << "Number= " << findFirstNegativeElement(eps);
}