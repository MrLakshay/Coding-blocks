#include <iostream>
using namespace std;
void recodd(int n)
{
    if (n == -1)
    {
        return;
    }
    cout << n << endl;
    recodd(n - 2);
}
void receven(int n, int i)
{
    if (i > n)
    {
        return;
    }
    cout << i << endl;
    receven(n, i + 2);
}
int main()
{
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        recodd(n - 1);
    }
    else
    {
        recodd(n);
    }
    receven(n, 2);
    return 0;
}