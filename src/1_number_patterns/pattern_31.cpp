#include <iostream>
using namespace std;

int main()
{
    int n = 7;

    cout << endl;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    for (int k = 2; k <= n; k++)
    {
        for (int l = 1; l <= n - k + 1; l++)
        {
            cout << l << " ";
        }
        cout << endl;
    }

    cout << endl;
}