#include <iostream>
using namespace std;
bool isSorted(int *a, int n, int i)
{
    if (i == n - 1)
    {
        return true;
    }
    if (a[i] <= a[i + 1] and isSorted(a, n, i + 1))
    {
        return true;
    }
    return false;
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
    if (isSorted(a, n, 0))
        cout << "Sorted" << endl;
    else
    {
        cout << "Not Sorted" << endl;
    }
    return 0;
}