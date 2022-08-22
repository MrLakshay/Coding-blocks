#include <iostream>
using namespace std;
int main()
{
    string s;
    s.push_back('a');
    s.push_back('b');
    s.push_back('c');
    s.push_back('d');
    cout << s << endl;
    s.pop_back();
    cout << s << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s[i] << " ";
    }
    cout << endl;
    return 0;
}