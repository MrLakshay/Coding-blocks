#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int d)
    {
        data = d;
        next = NULL;
    }
};
void InsertAtFront(node *&head, node *&tail, int d)
{
    if (head == NULL)
    {
        node *n = new node(d);
        head = tail = n;
    }
    else
    {
        node *n = new node(d);
        n->next = head;
        head = n;
    }
}
void printit(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}
void reverseLL(node *&head, node *&tail)
{
    node *curr = head;
    node *prev = NULL;
    while (curr != NULL)
    {
        node *n = curr->next;
        curr->next = prev;
        prev = curr;
        curr = n;
    }
    swap(head, tail);
}
void revrechelp(node *c, node *p)
{
    if (c == NULL)
    {
        return;
    }
    node *n = c->next;
    c->next = p;
    revrechelp(n, c);
}
void revrec(node *&head, node *&tail)
{
    revrechelp(head, NULL);
    swap(head, tail);
}
int main()
{
    node *head = NULL, *tail = NULL;
    InsertAtFront(head, tail, 1);
    InsertAtFront(head, tail, 2);
    InsertAtFront(head, tail, 3);
    InsertAtFront(head, tail, 4);
    printit(head);
    reverseLL(head, tail);
    cout << endl;
    printit(head);
    revrec(head, tail);
    cout << endl;
    printit(head);
    return 0;
}