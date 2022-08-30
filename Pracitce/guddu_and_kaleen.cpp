#include <iostream>
using namespace std;
void moveit(string &s, int i, int j, int k)
{
    string temp = s.substr(i, j);
    int l;
    for (l = k; l <= j - i; l++)
    {
        if (temp.size() - 1 == l)
        {
            break;
        }
        s[i++] = temp[l];
    }
    int m = 0;
    while (m <= k)
    {
        s[i++] = temp[m];
    }
}
void solveit(string &s)
{
    int i, j, k;
    cin >> i >> j >> k;
    k = (j - i) % k;
    moveit(s, 0, j - i, k);
}
int main()
{
    string s;
    cin >> s;
    int n;
    cin >> n;

    while (n--)
    {
        solveit(s);
    }
    cout << s << endl;
    return 0;
}