#include <iostream>
using namespace std;
int Sum(int n)
{
    if (n == 0)
        return 0;
    return n + Sum(n - 1);
}
int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    int chotasum = sum(n - 1);
    int badasum = chotasum + n;
    return badasum;
}
int main()
{
    int n;
    cin >> n;
    cout << sum(n) << endl;
    cout << Sum(n) << endl;
    return 0;
}