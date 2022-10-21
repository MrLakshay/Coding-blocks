#include <iostream>
using namespace std;
class Queue
{
    int *a, n, cs, f, e;

public:
    Queue(int s = 5)
    {
        a = new int[s];
        n = s;
        cs = 0;
        f = 0;
        e = n - 1;
    }
    void push(int d)
    {
        if (cs < n)
        {
            e = (e + 1) % n;
            a[e] = d;
            cs++;
        }
        else
        {
            cout << "Over Flow\n";
        }
    }
    void pop()
    {
        if (cs > 0)
        {
            f = (f + 1) % n;
            cs--;
        }
        else
        {
            cout << "Under Flow\n";
        }
    }
    bool empty()
    {
        return cs == 0;
    }
    int size()
    {
        return cs;
    }
    int front()
    {
        return a[f];
    }
};
int main()
{
    Queue qt;
    qt.push(1);
    qt.push(2);
    qt.push(3);
    qt.push(4);
    qt.push(5);
    while (!qt.empty())
    {
        cout << qt.front() << " ";
        qt.pop();
    }
    qt.pop();

    return 0;
}