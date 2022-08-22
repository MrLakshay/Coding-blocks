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
void append(char *a, char *b, int n)
{
    /*
    for (int j = 0; b[j] != '\0'; j++)
    {
        a[n++] = b[j];
    }*/
    int al = length(a);
    int bl = length(b);
    int i = al, j = 0;
    while (j <= bl)
    {
        a[i++] = b[j++];
    }
}
int main()
{
    char ar[100] = "Apple";
    char ay[100] = "iphone";
    int x = length(ar);
    append(ar, ay, x);
    cout << ar << endl;
}
