#include <iostream>
using namespace std;

int main()
{
    int n = 7;

    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2 * (i - 1); j++)
        {
            cout << " ";
        }

        for (int k = 1; k <= n - i + 1; k++)
        {
            cout << k << " ";
        }
        cout << endl;
    }

    for (int l = 2; l <= n; l++)
    {
        for (int m = 1; m <= 2 * (n - l); m++)
        {
            cout << " ";
        }

        for (int p = 1; p <= l; p++)
        {
            cout << p << " ";
        }
        cout << endl;
    }
    cout << endl;
}