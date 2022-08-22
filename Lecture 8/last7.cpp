#include <iostream>
using namespace std;
int last7(int *a, int n, int i)
{
    if (i == n)
    {
        return -1;
    }
    if (a[i] == 7)
    {
        return max(i, last7(a, n, i + 1));
    }
    return last7(a, n, i + 1);
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
    cout << last7(a, n, 0) << endl;

    return 0;
}