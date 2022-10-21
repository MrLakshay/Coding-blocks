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
node* odd(node* ode){
    if(head==NULL){
        return head;
    }
    if(head->data%2!=0){
        odd->next=head;

    }
}
node* even(node* eve){
    if(eve==NULL){
        return eve;
    }
    if(eve->data%2==0){
        eve->next=even(eve->next);
        return eve;
    }
    else{
        node* ode=eve;
    }
}
node* oddeve(node* head){
    if(head==nullptr) {
        return head;
    }
    if(head->data%2==0){
        head->next=
    }
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
    node* eve=even(head);
    node* ode=odd(head);
    printing(pritnjob);
    return 0;
}