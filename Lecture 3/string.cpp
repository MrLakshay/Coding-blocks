#include <iostream>
using namespace std;

void ReadString(char *a, int s, char idhartak = '\n')
{
    char ch;
    int i = 0;
    ch = cin.get();
    // while (ch!="#")           Will read till # sign
    while (i < s - 1 and ch != idhartak)
    {
        a[i++] = ch;
        ch = cin.get();
    }
    a[i] = '\0';
}

int main()
{
    char ch[100];
    // cin >> ch;
    // char idhartak;
    // cin >> idhartak;
    // ReadString(ch, 100, idhartak);

    cin.getline(ch, 100, '\n'); // \n by default hota hai
    cout << ch;
    return 0;
}