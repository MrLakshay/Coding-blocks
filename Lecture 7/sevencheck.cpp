#include <iostream>
using namespace std;
// int sevenFirst(int *a, int n, int i)
// {
//     if (i == n)
//     {
//         return -1;
//     }
//     if (a[i] == 7)
//     {
//         return i;
//     }
//     return sevenFirst(a, n, i + 1);
// }
// int sevenlast(int *a, int n, int i)
// {
//     if (i == -1)
//     {
//         return -1;
//     }
//     if (a[i] == 7)
//     {
//         return i;
//     }
//     return sevenlast(a, n, i - 1);
// }
// bool isSeven(int *a, int n)
// {

//     if (n == 0)
//     {
//         return false;
//     }
//     if (a[0] == 7)
//     {
//         return true;
//     }
//     return isSeven(a + 1, n - 1);
// }
// int firstseven(int *a, int n)
// {

//     if (n == 0)
//     {
//         return -1;
//     }
//     if (a[0] == 7)
//     {
//         return 0;
//     }
//     int ans = firstseven(a + 1, n - 1);
//     if (ans == -1)
//     {
//         return -1;
//     }
//     else
//     {
//         return ans + 1;
//     }
// }
// int allseven(int *a, int n, int i, int *allsev, int &j)
// {
//     if (i == n)
//     {
//         return;
//     }
//     if (a[i] == 7)
//     {
//         allsev[j] = i;
//         j += 1;
//         allseven(a, n, i + 1, allsev, j);
//         return;
//     }
//     allseven(a, n, i + 1, allsev, j);
// }
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
    else
    {
        return last7(a, n, i + 1);
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
    // bool issev = isSeven(a, n);
    // if (issev)
    // {
    //     cout << "True" << endl;
    // }
    // else
    // {
    //     cout << "False" << endl;
    // }
    // int firseven = sevenFirst(a, n, 0);
    // cout << firseven << endl;
    // cout << firstseven(a, n);
    // int lastseven = sevenlast(a, n, n - 1);
    // cout << lastseven << endl;
    int lastsev = last7(a, n, 0);
    cout << lastsev << endl;
    // int allsev[n];
    // int j = 0;
    // allseven(a, n, 0, allsev, j);
    // for (int i = 0; i < j; i++)
    // {
    //     cout << allsev[i] << " ";
    // }
    return 0;
}