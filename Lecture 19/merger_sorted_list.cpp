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
int midfinder(node *head)
{
    node *fast = head->next;
    node *slow = head;
    while(fast!=NULL and fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow->data;
}
void InsertAtEnd(node *&head, node *&tail, int d)
{

    if (head == NULL)
    {
        node *n = new node(d);
        head = tail = n;
    }
    else
    {
        node *n = new node(d);
        tail->next = n;
        tail = n;
    }
}
void printit(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
node *mergesorted(node *h1, node *h2)
{
    if (!h2)
        return h1;
    if (!h1)
    {
        return h2;
    }
    node *nH;
    if (h1->data < h2->data)
    {
        nH = h1;
        nH->next = mergesorted(h1->next, h2);
    }
    else
    {
        nH = h2;
        nH->next = mergesorted(h1, h2->next);
    }
    return nH;
}
int main()
{
    node *head = NULL, *tail = NULL;
    InsertAtEnd(head, tail, 1);
    InsertAtEnd(head, tail, 3);
    InsertAtEnd(head, tail, 5);
    InsertAtEnd(head, tail, 7);
    node *head2 = NULL, *tail2 = NULL;
    InsertAtEnd(head2, tail2, 2);
    InsertAtEnd(head2, tail2, 4);
    InsertAtEnd(head2, tail2, 6);
    InsertAtEnd(head2, tail2, 8);
    printit(head);
    printit(head2);
    node *x = mergesorted(head, head2);
    printit(x);
    cout<<endl<<midfinder(x);
    // printit(head2);
    return 0;
}