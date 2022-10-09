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
    cout<<endl;
}
int lenll(node* head){
    int x=0;
    while (head)
    {
        x++;
        head=head->next;
    }
    return x;
}

void oddeven(node* &head,node* &tail)
{
    if(head==NULL or head->next==NULL){
        return;
    }
    node* temp=head;
    int n=lenll(head);
    int i=0;
    for (i=0; i < n; i++)
    {
        if(temp==NULL or temp->next==NULL or temp->next->next==NULL) {
            break;
        }
        if(temp->next->data%2==0){
            node* tx=temp->next;
            temp->next=temp->next->next;
            tail->next=tx;
            tail=tail->next;
            tail->next=NULL;
        }
        else{
            temp=temp->next;
        }
    }
    if(head->data%2==0){
        node* temp=head;
        tail->next=temp;
        head=temp->next;
        temp->next=NULL;
    }
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
    oddeven(head,tail);
    printing(head);
    return 0;
}