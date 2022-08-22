#include <iostream>
#include <algorithm>
using namespace std;
bool comp(string a, string b)
{
    if (a.length() == b.length())
    {
        return a < b;
    }
    return a.length() < b.length();
}
int main()
{
    string s[100] = {
        "hi",
        "hello",
        "kaise hoo",
        "whatsupp",
        "tu"};
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        cout << s[i] << endl;
    }
    cout << endl
         << "After sorting" << endl;
    sort(s, s + n, comp);
    for (int i = 0; i < n; i++)
    {
        cout << s[i] << endl;
    }

    return 0;
}