#include <iostream>
using namespace std;
void print(int n, int k)
{
    double count = 0;
    
    for (int i = 0; i < n; i++)
    {
        count = pow(-1, i) * pow(2, i) / (pow(i, (i + 1)) + 1);
        if ((i+1)%k == 0)
        {
          continue;
        }
        else
        {
          cout << count << " ";
        }
    }
    
}
void main()
{
    int n, k = 0;
    cout << " n = ";
    cin >> n;
    cout << "k = ";
    cin >> k;
    print(n, k);
}