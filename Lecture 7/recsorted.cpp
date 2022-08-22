#include <iostream>
using namespace std;
bool isSorted(int *a, int n)
{
    if (n <= 1)
    {
        return true;
    }
    if (a[0] <= a[1] and isSorted(a + 1, n - 1) == true)
    {
        return true;
    }
    return false;
}
bool isSortedRev(int *a, int n)
{
    if (n <= 1)
    {
        return true;
    }
    if (a[n - 1] >= a[n - 2] and isSortedRev(a, n - 1) == true)
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
    if (isSorted(a, n))
        cout << "Sorted" << endl;
    else
    {
        cout << "Not Sorted" << endl;
    }
    if (isSortedRev(a, n))
        cout << "Sorted" << endl;
    else
    {
        cout << "Not Sorted" << endl;
    }
    return 0;
}