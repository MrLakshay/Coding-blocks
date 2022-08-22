#include <iostream>
using namespace std;
int main()
{
    string s, s1;
    s = "Hello World";
    cout << s << endl;
    s1 = "Learning String";
    cout << s1 << endl;
    // cin >> s; // ignore white spaces
    // cout << s << endl;
    // cin.ignore();
    // getline(cin, s);
    // cout << s << endl;
    // s += s1;
    if (s > s1)
    {
        cout << s << " is greater than " << s1;
    }
    else if (s > s1)
    {
        cout << s1 << " is greater than " << s;
    }
    else
    {
        cout << s << " is equals to " << s1;
    }
    return 0;
}