#include <iostream>
using namespace std;
int recmul(int a, int b)
{
    if (b == 0)
    {
        return 0;
    }
    return a + recmul(a, b - 1);
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << recmul(a, b);
    return 0;
}