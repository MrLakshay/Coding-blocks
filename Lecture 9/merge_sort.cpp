#include <iostream>
using namespace std;
void merge(int *a, int *b, int *c, int s, int e)
{
    int m = (s + e) / 2;
    int i = s, j = m + 1, k = s;
    while (i <= m and j <= e)
    {
        if (b[i] < c[j])
        {
            a[k++] = b[i++];
        }
        else
        {
            a[k++] = c[j++];
        }
    }
    while (j <= e)
    {
        a[k++] = c[j++];
    }
    while (i <= m)
    {
        a[k++] = b[i++];
    }
}
void merge_sort(int *arr, int start, int end)
{
    if (start >= end)
    {
        return;
    }
    int b[1000], c[1000];
    int mid = (start + end) / 2;
    for (int i = start; i <= mid; i++)
    {
        b[i] = arr[i];
    }
    for (int i = mid + 1; i <= end; i++)
    {
        c[i] = arr[i];
    }
    merge_sort(b, start, mid);
    merge_sort(c, mid + 1, end);
    merge(arr, b, c, start, end);
}
void print(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[] = {4, 3, 1, 6, 2, 5};
    int n = sizeof(arr) / sizeof(int);
    merge_sort(arr, 0, n - 1);
    print(arr, n);
    return 0;
}