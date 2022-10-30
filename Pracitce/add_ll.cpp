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
node* add(node* head1,node* head2){
    int carry=0;
    node* temp=head1;
    while (head1!=NULL and head2!=NULL)
    {
        head1->data+=head2->data+carry;
        carry=carry%10;
        head1->data=head1->data/10;
    }
    if(carry!=0){
        head1->next=new node(carry);
    }
    return head1;
    
}
int main()
{
    int n;
    cin >> n;
    node *head = NULL, *tail = NULL;
    node* v;
    for (int i = 0; i < n;i++)
    {
        int x;
        cin>>x;
        v=insert(x, head, tail);
    }
    node* head2=NULL,*tail2=NULL;
    int n2;
    cin>>n2;
    for (int i = 0; i < n2;i++)
    {
        int x;
        cin>>x;
        v=insert(x, head2, tail2);
    }
    node* pritnjob=add(head1,head2);
    printing(pritnjob);
    return 0;
}