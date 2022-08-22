#include <iostream>
#include <cstring>
#include <algorithm> //Sort function
using namespace std;
int main()
{
    string s[100];
    int n;
    cin >> n;
    cin.get();
    for (int i = 0; i < n; i++)
    {
        getline(cin, s[i]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << s[i] << endl;
    }
    // Sort these string lexiographically

    return 0;
}