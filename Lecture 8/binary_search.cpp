#include <iostream>
using namespace std;
int binarysearch(int *a, int s, int e, int key)
{
    if (s > e)
    {
        return -1;
    }
    int mid = (s + e) / 2;
    if (a[mid] == key)
    {
        return mid;
    }
    else if (a[mid] < key)
    {
        return binarysearch(a, mid + 1, e, key);
    }
    else
    {
        return binarysearch(a, s, mid - 1, key);
    }
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
    cout << binarysearch(a, 0, n - 1, key);

    return 0;
}