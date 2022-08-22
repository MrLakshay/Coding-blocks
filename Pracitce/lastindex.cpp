#include <iostream>
using namespace std;
int lastindex(int *a, int i, int n, int key)
{
    if (i == n)
    {
        return -1;
    }
    int li = lastindex(a, i + 1, n, key);
    if (a[i] == key)
    {
        return max(i, li);
    }
    return li;
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
    int key;
    cin >> key;
    cout << lastindex(a, 0, n, key);

    return 0;
}