#include <iostream>
using namespace std;
void tower(int n, char src, char help, char des)
{
    // base case
    if (n == 0)
    {
        return;
    }
    // recursive case
    tower(n - 1, src, des, help);
    cout << "Taking disk " << n << " from " << src << " to " << des << endl;
    tower(n - 1, help, src, des);
}
int main()
{
    int n;
    cin >> n;
    char src = 'a', des = 'b', help = 'c';
    tower(n, src, help, des);
    return 0;
}