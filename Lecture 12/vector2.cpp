#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    // vector<int> v(10000);
    vector<int> v1(10, 1);
    // int n;
    // cin >> n;

    // clear a vector
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> v[i];
    // }

    // reverse a vector
    reverse(v1.begin(), v1.end());
    for (int i = 0; i < 10; i++)
    {
        cout << v1[i] << " ";
    }
    return 0;
}