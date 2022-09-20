#include <iostream>
#include <vector>
using namespace std;

// TC: O(N(ln(ln(N)))) === O(N)
void findseive(int n)
{
    vector<bool> seive(n + 1, true);
    for (int i = 2; i <= n; i++)
    {
        if (seive[i] == true)
        {
            for (int j = 2 * i; j < n; j += i)
            {
                seive[j] = false;
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (seive[i] == true)
        {
            cout << i << " ";
        }
    }
}
int main()
{
    int n;
    cin >> n;
    findseive(n);
    return 0;
}