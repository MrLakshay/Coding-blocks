#include <iostream>
using namespace std;
int prints(string s, int n)
{
    if (n == 0)
    {
        return 0;
    }
    int ld = s[n - 1] - '0';
    int chotaans = prints(s, n - 1);
    return (chotaans * 10) + ld;
}
int main()
{
    string s;
    cin >> s;
    int n = s.length();
    cout << prints(s, n);
    return 0;
}