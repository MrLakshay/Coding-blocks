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
node* midfinder(node *head)
{
    node *fast = head->next;
    node *slow = head;
    while(fast!=NULL and fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
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
node* mergesort(node* head){
    //Base case
    if(!head or !head->next){
        return head;
    }
    //Recursive case
    node* m=midfinder(head);
    node* a=head;
    node* b=m->next;
    m->next=NULL;
    //2. Sort
    a=mergesort(a);
    b=mergesort(b);
    node* nh=mergesorted(a,b);
    return nh;
}
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
void bubblesort(node* &head){
    int len=LenghtLL(head);
    for (int i = 0; i < len-1; i++)
    {
        node* c=head;
        node* p=NULL;
        while (c!=NULL and c->next!=NULL)
        {
            node* n=c->next;
            if(c->data > n->data){
                //swapping hogi
                if(p==NULL){
                    c->next=n->next;
                    n->next=c;
                    p=head=n;
                }
                else{
                    
                    c->next=n->next;
                    n->next=c;
                    p->next=n;
                    p=n;
                }
            }
            else{
            //swapping nahi hogi
            p=c;
            c=n;
            }
        }
    }
}
int main()
{
    node *head = NULL, *tail = NULL;
    InsertAtEnd(head, tail, 1);
    InsertAtEnd(head, tail, 3);
    InsertAtEnd(head, tail, 5);
    InsertAtEnd(head, tail, -5);
    InsertAtEnd(head, tail, -2);
    InsertAtEnd(head, tail, 7);
    // node* head2=mergesort(head);
    bubblesort(head);
    printit(head);
    return 0;
}