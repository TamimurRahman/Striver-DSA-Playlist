#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i, j, k, s;
    for (i = 1; i <= n; i++)
    {
        for (j = i; j <= n; j++)
        {
            cout << "* ";
        }
        if (i > 1)
            for (s = 1; s <= 2 * (i - 1); s++)
            {
                cout << "  ";
            }
        for (k = i; k <= n; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= n - i + 1; j++)
        {
            cout << "* ";
        }
        for (s = 1; s <= 2 * (i - 1); s++)
        {
            cout << "  ";
        }
        for (k = 1; k <= n - i + 1; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}