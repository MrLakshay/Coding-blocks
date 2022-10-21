#include <iostream>
#include <map>
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
map<int, node *> mp;
node *insert(int x, node *&head, node *&tail)
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
    return v;
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

node *cycle(node *head)
{
    node *fast = head, *slow = head;
    while (fast != NULL and fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (fast == slow)
        {
            return slow;
        }
    }
    return NULL;
}
void breakcycle(node *head, node *ptr)
{
    node *slow = head;
    while (slow->next != ptr)
    {
        /* code */
        slow = slow->next;
    }

    while (head != ptr)
    {
        head = head->next;
        ptr = ptr->next;
        slow = slow->next;
    }
    slow->next = NULL;
}
int main()
{
    int n;
    cin >> n;
    node *head = NULL, *tail = NULL;
    node *v, *prev = NULL;
    while (n != -1)
    {
        if (mp.find(n) != mp.end())
        {
            prev->next = mp[n];
            prev = prev->next;
        }
        else
        {
            v = insert(n, head, tail);
            prev = v;
            mp[n]=v;
        }
        cin >> n;
    }
    node *bp = cycle(head);
    breakcycle(head, bp);
    printing(head);
    return 0;
}