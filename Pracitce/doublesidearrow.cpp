#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x = n * 2 - 1;
    int odd = 1;
    for (int i = 0; i < n - 1; i++)
    {
        cout << "  ";
    }
    cout << 1 << endl;
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        for (int j = i * 2; j >= 1; j--)
        {
            cout << "  ";
        }

        for (int j = n / 2 - i + 1; j >= 1; j--)
        {
            cout << j << " ";
        }
        for (int j = 0; j < odd; j++)
        {
            cout << "  ";
        }
        odd += 2;
        for (int j = 1; j <= n / 2 - i + 1; j++)
        {
            cout << j << " ";
        }

        cout << endl;
    }
    odd -= 4;
    for (int i = 1; i <= n / 2 - 1; i++)
    {
        for (int j = i * 2; j >= 1; j--)
        {
            cout << "  ";
        }

        for (int j = n / 2 - i + 1; j >= 1; j--)
        {
            cout << j << " ";
        }
        for (int j = 0; j < odd; j++)
        {
            cout << "  ";
        }
        odd -= 2;
        for (int j = 1; j <= n / 2 - i + 1; j++)
        {
            cout << j << " ";
        }

        cout << endl;
    }

    for (int i = 0; i < n - 1; i++)
    {
        cout << "  ";
    }
    cout << 1 << endl;
    return 0;
}