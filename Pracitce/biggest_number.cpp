
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

static bool comp(string a, string b)
{
    int na = a.length(), nb = b.length();
    if (na > nb)
    {
        for (int i = 0; i < na; i++)
        {
            int x = a[i] - '0';
            int y = b[i % nb] - '0';
            if (x > y)
            {
                return false;
            }
            else if (x < y)
            {
                return true;
            }
        }
    }
    else
    {
        for (int i = 0; i < nb; i++)
        {
            int x = a[i % na] - '0';
            int y = b[i] - '0';
            if (x > y)
            {
                return false;
            }
            else if (x < y)
            {
                return true;
            }
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end(), comp);
        for (int i = n - 1; i >= 0; i--)
        {
            cout << a[i];
        }
        cout << endl;
    }
    return 0;
}
