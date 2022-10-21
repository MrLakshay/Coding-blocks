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
void insert(int x, node *&head, node *&tail)
{
    node *v = new node(x);
    if (head == NULL)
    {
        head = v;
        tail = head;
    }
    else
    {
        tail->next = v;
        tail = tail->next;
    }
}
void printing(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}


node* midll(node *head)
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
node *merger(node *head, node *mid)
{
    if (!head)
    {
        return mid;
    }
    if (!mid)
    {
        return head;
    }
    node *nh;
    if (head->data > mid->data)
    {
        nh = mid;
        nh->next = merger(head, mid->next);
    }
    else
    {
        nh = head;
        nh->next = merger(head->next, mid);
    }
    return nh;
}

node* mergersort(node* head)
{
    if (!head or !head->next){
        return head;
    }
    node* mid = midll(head);
    node* a = head;
    node* b = mid->next;
    mid->next = NULL;
    a = mergersort(a);
    b = mergersort(b);
    node* nh = merger(a, b);
    return nh;
}
int main()
{
    int n;
    cin >> n;
    node *head = NULL, *tail = NULL;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        insert(x, head, tail);
    }
    node *head2 = mergersort(head);
    // node* nd=merger(head,head2);
    printing(head2);
    return 0;
}