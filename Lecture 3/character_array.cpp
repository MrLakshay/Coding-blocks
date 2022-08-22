#include <iostream>
using namespace std;

int main()
{
    char a[] = "Hello World";
    cout << a << endl;
    char b[12] = "Hello World";
    cout << b << endl;

    for (int i = 0; b[i] != '\0'; i++)
    {
        cout << b[i];
    }
    cout << endl;
    char ch[100];
    cin >> ch;
    cout << ch;

    return 0;
}