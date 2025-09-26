#include <iostream>
using namespace std;

int main()
{
    int n = 7;

    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

        for (int k = 1; k <= i; k++)
        {
            cout << k << " ";
        }
        cout << endl;
    }

    for (int p = 2; p <= n; p++)
    {
        for (int q = 1; q <= p - 1; q++)
        {
            cout << " ";
        }

        for (int r = 1; r <= n - p + 1; r++)
        {
            cout << r << " ";
        }
        cout << endl;
    }

    cout << endl;
}