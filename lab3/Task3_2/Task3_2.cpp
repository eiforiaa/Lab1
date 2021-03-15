#include <iostream>
using namespace std;
void print(int n, int k)
{
    double count = 0;
    int i = 0;
    while (i<n)
    {
        count = pow(-1, i) * pow(2, i) / (pow(i, (i + 1)) + 1);
        if ((i + 1) % k == 0)
        {
            i++;
            continue;
        }
        else
        {
            cout << count << " ";
        }
        i++;
    }

}
void main()
{
    int n, k = 0;
    cout << "n = ";
    cin >> n;
    cout << "k = ";
    cin >> k;
    print(n, k);
}