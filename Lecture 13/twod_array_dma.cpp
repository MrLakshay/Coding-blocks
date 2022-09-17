#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int cols;
    cin >> cols;
    // type* a=new type[n];
    // type : int*     n = rows

    int **a = new int *[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = new int[cols];
    }
    int number = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            a[i][j] = number++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
