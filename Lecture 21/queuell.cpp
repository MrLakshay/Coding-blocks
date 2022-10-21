#include <iostream>
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
class Queue
{
    node *head = NULL;
    node *tail = NULL;
    int cs;

public:
    Queue()
    {
        head = tail = NULL;
        cs = 0;
    }
    void push(int d)
    {
        if (!head)
        {
            head = tail = new node(d);
        }
        else
        {
            node *n = new node(d);
            tail->next = n;
            tail = n;
        }
        cs++;
    }
    void pop()
    {
        if (!head)
            return;
        else if (head->next == NULL)
        {
            delete head;
            head = tail = NULL;
        }
        else
        {
            node *temp = head;
            head = head->next;
            delete temp;
        }
        cs--;
    }

    bool empty()
    {
        return head == NULL;
    }
    int front()
    {
        return head->data;
    }
    int size()
    {
        return cs;
    }
};
int main()
{
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}
//😢😢😢😢😢