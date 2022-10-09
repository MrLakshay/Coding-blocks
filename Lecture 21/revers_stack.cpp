#include <iostream>
#include <stack>
using namespace std;
void push_bottom(stack<int> &s, int tope)
{
    if (s.empty())
    {
        s.push(tope);
        return;
    }
    int top = s.top();
    s.pop();
    push_bottom(s, tope);
    s.push(top);
}
void reverse_stack(stack<int> &s)
{
    if(s.empty()) return;
    int te = s.top();
    s.pop();
    reverse_stack(s);
    push_bottom(s, te);
}
void printit(stack<int> s){
    
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout<<endl;
}
int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    printit(s);
    reverse_stack(s);
    printit(s);
    return 0;
}