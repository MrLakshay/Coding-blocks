#include <iostream>
using namespace std;
void doit()
{
    int c1, c2, c3, c4;
    cin >> c1 >> c2 >> c3 >> c4;
    int n, m;
    cin >> n >> m;
    int rick[n], cab[m];
    for (int i = 0; i < n; i++)
    {
        cin >> rick[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> cab[i];
    }
    int helperrick = 0;
    for (int i = 0; i < n; i++)
    {
        helperrick += min(c2, rick[i] * c1);
    }
    int helpercab = 0;
    for (int i = 0; i < m; i++)
    {
        helpercab += min(c2, cab[i] * c1);
    }
    int grandtotal = 0;
    grandtotal += min(c3, helperrick);
    grandtotal += min(c3, helpercab);

    if (grandtotal > c4)
    {
        cout << c4 << endl;
    }
    else
    {
        cout << grandtotal << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        doit();
    }

    return 0;
}