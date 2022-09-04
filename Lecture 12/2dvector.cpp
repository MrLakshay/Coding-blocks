#include <iostream>
#include <vector>
using namespace std;
int main()
{

    vector<vector<int>> v;
    vector<int> v1({1, 2, 3, 4});
    vector<int> v2({1, 2, 3, 4, 5, 6});
    vector<int> v3({1, 2});
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}