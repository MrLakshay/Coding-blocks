#include <iostream>
using namespace std;
int sum(int *a, int n, int i)
{
    if (i == n)
    {
        return 0;
    }
    return sum(a, n, i + 1) + a[i];
}
int sum2(int *a, int n)
{
    if (n <= 1)
    {
        return a[n - 1];
    }
    return sum2(a, n - 1) + a[n - 1];
}
int sum3(int *a, int n)
{
    if (n == 1)
    {
        return a[0];
    }
    return sum3(a + 1, n - 1) + a[0];
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
    cout << sum(a, n, 0) << endl;
    cout << sum2(a, n) << endl;
    cout << sum3(a, n) << endl;
    return 0;
}