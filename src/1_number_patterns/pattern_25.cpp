#include <iostream>
using namespace std;

int main()
{
    int n = 7;

    cout << endl;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            cout << " ";
        }

        for (int k = 1; k <= n - i + 1; k++)
        {
            cout << k << " ";
        }
        cout << endl;
    }

    for (int p = 2; p <= n; p++)
    {
        for (int q = 1; q <= n - p; q++)
        {
            cout << " ";
        }

        for (int o = 1; o <= p; o++)
        {
            cout << o << " ";
        }
        cout << endl;
    }

    cout << endl;
}