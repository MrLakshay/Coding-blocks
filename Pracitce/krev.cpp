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
map<int,node*> mp;
node* insert(int x, node *&head, node *&tail)
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
node* rev(node* pre,node* curr){
    //Base case
    if(curr->next==NULL){
        curr->next=pre;
        return curr;
    }
    //Recursive Case
    node* temp=curr->next;
    curr->next=pre;
    return rev(curr,temp);
    // return curr;
}
node* krev(node* head,int k){
    if(head==NULL or head->next==NULL) return head;
    node* ptr=head,*temp=head;
    int i=0;
    while(i < k and ptr!=NULL)
    {
        ptr=ptr->next;
        i++;
    }
    node* a=ptr->next;
    ptr->next=nullptr;
    node* b=krev(a,k);
    node* prev=NULL,*curr=temp;
    node* c=rev(prev,curr);
    node* d=c;    
    while(d->next!=NULL){
        d=d->next;
    }
    d->next=b;
    return c;
}
int main()
{
    int n;
    cin >> n;
    int k;
    // cin>>k;
    node *head = NULL, *tail = NULL;
    node* v;
    for (int i = 0; i < n;i++)
    {
        int x;
        cin>>x;
        v=insert(x, head, tail);
    }
    node* head2=krev(head,k);
    // node* head2=rev(NULL,head);
    // node* nd=merger(head,head2);
    printing(head2);
    return 0;
}