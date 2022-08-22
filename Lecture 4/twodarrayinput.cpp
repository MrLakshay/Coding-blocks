#include <iostream>
using namespace std;
int main()
{
    int a[100][100];
    int n, m;
    cout << "Enter row and coloums" << endl;
    cin >> n >> m;
    int num = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            a[i][j] = num++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}