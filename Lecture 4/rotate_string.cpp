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
void rotate(char *a, int n)
{
    int al = length(a);
    int i = al - 1;
    while (i >= 0)
    {
        a[i + n] = a[i--];
    }
    for (int i = al, j = 0; j < n; i++, j++)
    {
        a[j] = a[i];
    }
    a[al] = '\0';
}
int main()
{
    char ar[100] = "Apple";
    int n = 3001;
    rotate(ar, n % length(ar));
    cout << ar << endl;
}