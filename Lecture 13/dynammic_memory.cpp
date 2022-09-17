#include <iostream>
using namespace std;
int main()
{
    int *a = new int;
    *a = 10;
    cout << *a << endl;
    float *f = new float;
    *f = 1.11;
    cout << *f << endl;

    // CREATE AN ARRAY
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = i + 1;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    delete a;
    delete f;
    delete[] arr;
    a = NULL;
    f = NULL;
    arr = NULL;
    return 0;
}