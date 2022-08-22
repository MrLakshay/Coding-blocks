#include <iostream>
using namespace std;
void dec(int n)
{
    if (n == 0)
    {
        return;
    }
    dec(n - 1);
    cout << n << " ";
    /*SWITCH ABOVE TWO
        STATEMENTS TO GET
        THE DECREASING ORDER
    */
}
int main()
{
    int n;
    cin >> n;
    dec(n);
    return 0;
}