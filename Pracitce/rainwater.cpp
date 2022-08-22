#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int m = 0; m < n; m++)
    {
        cin >> arr[m];
    }
    int i = 1, j = n - 2;
    int ans = 0;
    int startmax = arr[0], endmax = arr[j];
    while (i < j)
    {
        if (startmax < arr[i])
        {
            startmax = arr[i];
            i++;
        }
        else if (endmax < arr[j])
        {
            endmax = arr[j--];
        }
        else
        {
            ans += min(endmax, startmax) - arr[i];
            ans += min(endmax, startmax) - arr[j];
            i++;
            j--;
        }
    }
    cout << ans;

    return 0;
}