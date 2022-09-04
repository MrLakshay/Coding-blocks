#include <iostream>
using namespace std;
int ElephantWays(int i, int j)
{
    // Base case
    if (i == 0 and j == 0)
    {
        return 1;
    }
    // Recusive case
    int ans = 0;
    for (int k = 0; k < j; k++)
    {
        ans += ElephantWays(i, k);
    }
    for (int k = 0; k < i; k++)
    {
        ans += ElephantWays(k, j);
    }
    return ans;
}
int main()
{
    int n, m;
    cin >> n >> m;
    cout << ElephantWays(n - 1, m - 1);
    return 0;
}