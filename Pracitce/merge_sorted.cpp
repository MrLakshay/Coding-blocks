#include <iostream>
using namespace std;
void merge(int *a, int *b, int *c, int n, int m)
{
    int i = 0, j = 0, k = 0;
    while (i < n and j < m)
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
    while (j < m)
    {
        a[k++] = c[j++];
    }
    while (i < n)
    {
        a[k++] = b[i++];
    }
}
void print(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
int main()
{
    int b[] = {1, 3, 5, 9, 12}, c[] = {2, 4, 7, 10, 23};
    int n = sizeof(b) / sizeof(int);
    int m = sizeof(c) / sizeof(int);
    int a[100];
    merge(a, b, c, n, m);
    print(a, n + m);

    return 0;
}