#include <iostream>
using namespace std;
void sortit(int *a, int n, int i, int j)
{
    if (i == n)
    {
        return;
    }
    if (j == -1)
    {
        sortit(a, n, i + 1, i + 1);
        return;
    }
    if (a[j + 1] < a[j])
    {
        swap(a[j], a[j + 1]);
        sortit(a, n, i, j - 1);
    }
    else
        sortit(a, n, i + 1, i + 1);
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sortit(a, n, 0, 0);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
