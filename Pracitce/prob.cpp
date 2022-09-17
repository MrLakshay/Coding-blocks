#include <iostream>
using namespace std;
void Subsequences(string sub, string output, int i, int j, int len)
{
    // base case
    if (i == len)
    {
        output[j] = '\0';
        cout << output << endl;
        return;
    }

    // recursive case
    Subsequences(sub, output, i + 1, j, len);
    output.push_back(sub[i]);
    Subsequences(sub, output, i + 1, j+1, len);
}
int main()
{
    string sub = "abc";
    int len = sub.length();
    string output = "";

    Subsequences(sub, output, 0, 0, len);

    return 0;
}