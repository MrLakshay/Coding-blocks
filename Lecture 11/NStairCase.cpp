#include <iostream>
using namespace std;

int NStairCase(int n)
{
    if (n == 0)
    {
        return 1;
    }
    if (n < 0)
    {
        return 0;
    }
    return NStairCase(n - 1) + NStairCase(n - 2) + NStairCase(n - 3);
}
int NStairCase(int n, int k)
{
    if (n == 0)
    {
        return 1;
    }
    if (n < 0)
    {
        return 0;
    }
    int ans = 0;
    for (int i = 1; i < k + 1; i++)
    {
        ans += NStairCase(n - i, k);
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    cout << NStairCase(n) << endl;
    int k;
    cin >> k;
    cout << NStairCase(n, k) << endl;
    return 0;
}