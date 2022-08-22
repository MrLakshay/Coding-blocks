#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i, j, mid;
    if (n % 2 == 1) // when n is odd, increase it by 1 to make it even
        n++;
    mid = n / 2;

    // upper half pattern
    for (i = 1; i <= mid; i++)
    {
        for (j = 1; j <= mid - i; j++) // print the blank spaces and outer box before star
            cout << "*\t";

        if (i == 1)
        {
            cout << "*\t";
        }
        else
        {
            cout << "*\t"; // in each line star at start and end position
            for (j = 1; j <= 2 * i - 3; j++)
            { // print space to make hollow
                cout << " \t";
            }
            cout << "*\t";
        }
        for (j = 1; j <= mid - i; j++) // print the blank spaces and outer box after star
            cout << "*\t";

        cout << endl;
    }

    // lower half pattern
    for (i = mid + 1; i < n; i++)
    {

        for (j = 1; j <= i - mid; j++) // print the blank spaces and outer box before star
            cout << "*\t";

        if (i == n - 1)
        {
            cout << "*\t";
        }
        else
        {
            cout << "*\t"; // in each line star at start and end position
            for (j = 1; j <= 2 * (n - i) - 3; j++)
            { // print space to make hollow
                cout << " \t";
            }
            cout << "*\t";
        }
        for (j = 1; j <= i - mid; j++) // print the blank spaces and outer box after star
            cout << "*\t";

        cout << endl;
    }
    return 0;
}