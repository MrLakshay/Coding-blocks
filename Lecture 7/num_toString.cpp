#include <iostream>
using namespace std;
string s[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
string int_toString(int n)
{
    if (n <= 0)
    {
        return "";
    }
    int x = n % 10;
    n /= 10;
    cout << s[x] << " ";
    int_toString(n);
}
int main()
{
    int n;
    cin >> n;

    int_toString(n);
    return 0;
}