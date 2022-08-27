#include <iostream>
using namespace std;
void subSequences(char *in, char *out, int i, int j)
{
    if (in[i] == '\0')
    {
        out[j] = '\0';
        cout << out << endl;
        return;
    }
    subSequences(in, out, i + 1, j);
    out[j] = in[i];
    subSequences(in, out, i + 1, j + 1);
}
int main()
{
    char in[] = "abc";
    // int n = sizeof(in) / sizeof(char);
    char out[100];
    subSequences(in, out, 0, 0);
    return 0;
}