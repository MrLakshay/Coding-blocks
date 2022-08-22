#include <iostream>
using namespace std;
int main()
{
    int n, m, number = 1;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            a[i][j] = number++;
        }
    }
    int sr = 0, sc = 0, er = n - 1, ec = m - 1;
    while (sr <= er and sc <= ec)
    {
        for (int i = sc; i <= ec; i++)
        {
            cout << a[sr][i] << " ";
        }
        sr++;
        for (int i = sr; i <= er; i++)
        {
            cout << a[i][ec] << " ";
        }
        ec--;
        if (sc < ec)
        {
            for (int i = ec; i >= sc; i--)
            {
                cout << a[er][i] << " ";
            }
            er--;
        }
        if (sc < ec)
        {
            for (int i = er; i >= sr; i--)
            {
                cout << a[i][sc] << " ";
            }
            sc++;
        }
    }

    return 0;
}