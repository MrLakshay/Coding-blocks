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
void copy(char *a, char *ans)
{
    int i;
    for (i = 0; a[i] != '\0'; i++)
    {
        ans[i] = a[i];
    }
    ans[++i] = '\0';
}
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    int large = 0;
    char ans[100];
    for (int i = 0; i < n; i++)
    {
        char a[100];
        cin.getline(a, 100);
        int x = length(a);
        if (x > large)
        {
            large = x;
            copy(a, ans);
        }
    }
    cout << ans << " " << large;
}