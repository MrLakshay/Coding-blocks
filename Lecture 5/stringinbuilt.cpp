#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char a[100] = "pro", b[100] = "coder";
    cout << strlen(a) << endl;
    strcat(a, b);
    cout << a << endl;
    if (strcmp(a, b) > 0)
    {
        cout << a << " is greater than " << b << endl;
    }
    else if (strcmp(a, b) < 0)
    {
        cout << b << " is greater than " << a << endl;
    }

    else
    {
        cout << a << " is equals to " << b << endl;
    }
    return 0;
}