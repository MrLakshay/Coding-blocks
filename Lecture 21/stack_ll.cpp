#include <iostream>
#include <vector>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int x)
    {
        data = x;
        next = NULL;
    }
};
class Stack
{
    node *head;
public:
    Stack()
    {
        head = NULL;
    }
    void push(int x)
    {
        if (head == NULL)
        {
            head = new node(x);
            return;
        }
        node *nd = new node(x);
        nd->next = head;
        head = nd;
    }
    void pop()
    {
        node *ptr = head;
        head = ptr->next;
        delete ptr;
    }
    bool empty()
    {
        if (head == NULL)
            return true;
        return false;
    }
    int top()
    {
        return head->data;
    }
};
int main()
{
    Stack s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}