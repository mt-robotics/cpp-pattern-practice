#include <iostream>
using namespace std;

int main()
{
    int n = 7;

    cout << endl;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    for (int k = 2; k <= n; k++)
    {
        for (int l = 1; l <= k; l++)
        {
            cout << l << " ";
        }
        cout << endl;
    }
    cout << endl;
}