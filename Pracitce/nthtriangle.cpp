#include <iostream>
using namespace std;
void nthtri(int i, int n)
{
    if (i == n + 1)
    {
        return;
    }
    for (int j = 0; j < i; j++)
    {
        cout << "*\t";
    }
    cout << endl;
    nthtri(i + 1, n);
}
int main()
{
    int n;
    cin >> n;
    nthtri(1, n);
    return 0;
}