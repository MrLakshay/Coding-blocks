#include <iostream>
#include <bits/stdc++.h>
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
node* minfider(node* &head){
    if(head==NULL){
        return head;
    }
    int minn=INT_MAX;
    node* temp=head;
    node* prevb=NULL,*curr=head,*prev=NULL;
    while(temp!=NULL){
        if(temp->data<minn){
            minn=temp->data;
            curr=temp;
            prevb=prev;
        }
        prev=temp;
        temp=temp->next;
    }
    if(prevb==NULL){
        head=head->next;
        curr->next=NULL;
        return curr;
    }
    else{
        prevb->next=curr->next;
        curr->next=NULL;
        return curr;
    }    
}
node* insertion_sort(node* &head){
    node* newhead=NULL;
    newhead=minfider(head);
    node* temp=newhead;
    node* x=minfider(head);
    while(x!=NULL){
        temp->next=x;
        temp=temp->next;
        x=minfider(head);
    }
    return newhead;
}
int main()
{
    int n;
    cin >> n;
    node *head = NULL, *tail = NULL;
    node *v, *prev = NULL;
    for (int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        insert(x,head,tail);
    }
    // cout<<len<<endl;
    head=insertion_sort(head);
    printing(head);
    return 0;
}