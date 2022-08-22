#include <iostream>
using namespace std;
bool isbal(string s, int start, int end)
{
    if (start > end)
    {
        return true;
    }
    if (s[start] == s[end])
    {
        return isbal(s, start + 1, end + 1);
    }
    else if (s[start] == '[' or s[start] == '{' or s[start] == '(')
    {
        return false;
    }
    else if (s[end] == ']' or s[end] == '}' or s[end] == ')')
    {
        return false;
    }
    else
    {
        return isbal(s, start + 1, end + 1);
    }
}

int main()
{
    string str;
    cin >> str;
    int n = str.length();
    if (isbal(str, 0, n - 1))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
    return 0;
}