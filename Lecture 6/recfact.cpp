#include <iostream>
using namespace std;
int fact(int n)
{
    if (n == 0)
        return 1;
    int chotafactorial = fact(n - 1);
    int badafactorial = chotafactorial * n;
    return badafactorial;
}
int main()
{
    int n;
    cin >> n;
    cout << fact(n) << endl;
    return 0;
}