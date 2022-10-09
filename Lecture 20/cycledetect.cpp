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
node *midfinder(node *head)
{
    node *fast = head->next;
    node *slow = head;
    while (fast != NULL and fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
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
void cyclebreak(node *head,node *fast){
    node* slow=head;
    node* temp=head;
    while (temp->next!=fast)
    {
        temp=temp->next;
    }
    while (fast!=slow)
    {
        temp=fast;
        fast=fast->next;
        slow=slow->next;
    }
    temp->next=NULL;
}
bool cycledetect(node *head)
{
    node *fast = head;
    node *slow = head;
    while (fast and fast->next)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (fast == slow)
        {
            cyclebreak(head,fast);
            return true;
        }
    }
    return false;
}
void createCycle(node* head,node* tail){
    tail->next=head->next->next;
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
    createCycle(head,tail);
    cycledetect(head);
    printit(head);
    // if(cycledetect(head)){
    //     cout<<"Cycle hai vai kya kaar rha hai!!!!!!!!!!"<<endl;
        
    //     printit(head);
    // }
    // else{
    //     printit(head);
    //     cout<<endl;
    // }

    return 0;
}