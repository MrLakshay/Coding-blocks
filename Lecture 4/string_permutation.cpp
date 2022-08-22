#include <iostream>
using namespace std;
int main()
{
    char a[] = "aacbd";
    char b[] = "dcabd";
    int freq[26] = {0};
    for (int i = 0; a[i] != '\0'; i++)
    {
        freq[a[i] - 'a']++;
    }
    for (int i = 0; a[i] != '\0'; i++)
    {
        freq[b[i] - 'a']--;
    }
    bool flag = false;
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] != 0)
        {
            cout << "Not anagram";
            flag = true;
            break;
        }
    }
    if (flag == false)
    {
        cout << "Anagram";
    }

    return 0;
}