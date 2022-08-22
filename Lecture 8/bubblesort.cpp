#include <iostream>
using namespace std;
// void bubblerec(int *a, int n, int i)
// {
//     if (i == n - 1)
//     {
//         return;
//     }
//     for (int j = 0; j < n - 1 - i; j++)
//     {
//         if (a[j] > a[j + 1])
//         {
//             swap(a[j], a[j + 1]);
//         }
//     }
//     bubblerec(a, n, i + 1);
// }
void bubblerec(int *a, int n, int i, int j)
{
    if (i == n - 1)
    {
        return;
    }
    if (j < n - i - 1)
    {
        if (a[j] > a[j + 1])
        {
            swap(a[j], a[j + 1]);
        }
        bubblerec(a, n, i, j + 1);
    }
    bubblerec(a, n, i + 1, 0);
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
    bubblerec(a, n, 0, 0);
    for (int j = 0; j < n; j++)
    {
        cout << a[j] << " ";
    }

    return 0;
}