#include <iostream>
#include <math.h>
using namespace std;
bool isprime(int &n)
{
    if (n != 2 and n % 2 == 0)
        return false;
    for (int i = 3; i < sqrt(n); i += 2)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    // Time complexity : O(sqrt(n)/2) === O(sqrt(n))
    int n;
    cin >> n;
    for (int i = 2; i < n; i++)
    {
        if (isprime(i))
        {
            cout << i << " ";
        }
    }

    // cout << isprime(n);

    return 0;
}