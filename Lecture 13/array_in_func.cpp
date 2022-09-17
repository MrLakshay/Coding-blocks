#include <iostream>
using namespace std;
int *ca(int n)
{
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = i + 1;
    }

    return a;
}
int main()
{
    int n;
    cin >> n;
    int *arr = ca(n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    delete[] arr;
    arr = NULL;
    return 0;
}