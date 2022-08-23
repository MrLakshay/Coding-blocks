#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int stk[n];
    int ans[n];
    int stkptr = -1;
    for (int i = 0; i < n; i++)
    {
        ans[i] = -1;
    }

    for (int i = 0; i < 2 * n; i++)
    {
        while (stkptr != -1 and arr[stk[stkptr]] < arr[i % n])
        {
            ans[stk[stkptr]] = arr[i % n];
            stkptr--;
        }
        if (i < n)
        {
            stkptr++;
            stk[stkptr] = i;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (ans[i] == -1)
        {
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}