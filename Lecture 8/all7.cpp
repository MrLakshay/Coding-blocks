#include <iostream>
using namespace std;
void all7(int *a, int n, int &i)
{
    if (i == n)
    {
        return;
    }

    if (a[i] == 7)
    {
        cout << i << " ";
    }
    all7(a, n, ++i);
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
    int i = 0;
    all7(a, n, i);
    return 0;
}