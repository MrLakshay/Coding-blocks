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
int LenghtLL(node *head)
{
    int ans = 0;
    while (head != NULL)
    {
        head = head->next;
        ans++;
    }
    return ans;
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
void InsetAtMid(node *head, node *tail, int data, int pos)
{
    if (pos == 0)
    {
        InsertAtFront(head, tail, data);
    }
    else if (pos >= LenghtLL(head))
    {
        InsertAtEnd(head, tail, data);
    }
    else
    {
        node *temp = head;
        for (int i = 0; i < pos - 1; i++)
        {
            temp = temp->next;
        }
        node *n = new node(data);
        n->next = temp->next;
        temp->next = n;
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
void deleteAtFront(node *&head, node *&tail)
{
    if (head == NULL)
        return;
    if (head->next == NULL)
    {
        delete head;
        head = tail = NULL;
    }
    node *t = head;
    head = head->next;
    delete t;
}
void deleteAtEnd(node *&head, node *&tail)
{
    if (head == NULL)
        return;
    else if (head->next == NULL)
    {
        delete head;
        head = tail = NULL;
    }
    else
    {
        node *temp = head;
        while (temp->next != tail)
        {
            temp = temp->next;
        }
        delete tail;
        temp->next = NULL;
        tail = temp;
    }
}
void deleteatmid(int pos, node *&head, node *&tail)
{
    if (pos == 0){
        deleteAtFront(head, tail);
        // return;
    }
    else if(pos >= LenghtLL(head) - 1) {
        deleteAtEnd(head, tail);
        // return;
    }
    else
    {
        node *temp = head;
        for (int i = 1; i < pos; i++)
        {
            temp = temp->next;
        }
        node *n = temp->next;
        temp->next = temp->next->next;
        delete n;
    }
}
int main()
{
    node *head = NULL, *tail = NULL;
    InsertAtFront(head, tail, 1);
    InsertAtFront(head, tail, 2);
    InsertAtFront(head, tail, 3);
    InsertAtFront(head, tail, 4);
    InsertAtEnd(head, tail, 5);
    InsertAtEnd(head, tail, 6);
    InsertAtEnd(head, tail, 7);
    InsertAtEnd(head, tail, 8);
    InsertAtEnd(head, tail, 9);
    InsetAtMid(head, tail, 100, 5);
    printit(head);
    cout << endl
         << LenghtLL(head) << endl;
    deleteatmid(2, head, tail);
    while (head)
    {
        printit(head);
        cout << endl;
        deleteAtFront(head, tail);
    }
    return 0;
}