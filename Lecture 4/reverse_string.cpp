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
void append(char *a)
{
    int al = length(a);
    int i = 0, j = al - 1;
    while (i < j)
    {
        swap(a[i++], a[j--]);
    }
}
int main()
{
    char ar[100] = "Apple";
    append(ar);
    cout << ar << endl;
}