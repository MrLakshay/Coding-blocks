#include <iostream>
using namespace std;

int length(char *a)
{
    int cnt = 0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        cnt++;
    }
    return cnt;
}
bool ispal(char *a, int n)
{
    int i = 0, j = n - 1;
    while (i < j)
    {
        if (a[i++] != a[j--])
            return false;
    }
    return true;
}
int main()
{
    char a[] = "naman";
    int x = length(a);
    cout << ispal(a, x);
}