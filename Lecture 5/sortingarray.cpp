#include <iostream>
#include <algorithm>
using namespace std;
bool meracompare(int a, int b)
{
    cout << "Comparing " << a << " " << b << endl;
    return a < b;
}
int main()
{
    int a[] = {1, 2, 3, 4, 0};
    int n = sizeof(a) / sizeof(int);
    sort(a, a + n, meracompare);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}

/*
Tim sort by default
if elements are low insertion sort else merge sort
if comparator is added insertion sort is used only
*/