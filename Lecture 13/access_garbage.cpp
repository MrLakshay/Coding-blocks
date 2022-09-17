#include <iostream>
using namespace std;
int main()
{
    int *x = new int;
    *x = 100;
    cout << *x + 22 << endl;
    delete x;
    // x=NULL;
    if (*x == 122)
        cout << "Take right";
    else
        cout << "Take left";
    cout << endl;
    cout << *x;
    return 0;
}