#include <iostream>
using namespace std;
char keys[][10] = {
    "", "", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"};

string contacts[100] = {
    "VARUN",
    "DORAMON",
    "GIAN",
    "VAIBHAV",
    "AZMAT"};

void PhoneKeyPad(char *in, int i, char *out, int j)
{
    if (in[i] == '\0')
    {
        out[j] = '\0';
        string x(out);
        for (int k = 0; k < 5; k++)
        {
            if (x == contacts[k])
            {
                cout << x << endl;
            }
        }
        return;
    }
    int d = in[i] - '0';
    for (int k = 0; keys[d][k] != '\0'; k++)
    {
        out[j] = keys[d][k];
        PhoneKeyPad(in, i + 1, out, j + 1);
    }
}
int main()
{
    char in[100], out[100];
    cin >> in;
    PhoneKeyPad(in, 0, out, 0);
    return 0;
}