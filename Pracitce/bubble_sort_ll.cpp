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
node* bubblesort(node* head,int length){
    if(length==0 or head==NULL or head->next==NULL) {
        return head;
    }
    node* temp=head;
    node* prev=nullptr;
    while(temp->next!=NULL){
        if(temp->data>temp->next->data){
            node* next=temp->next;
            temp->next=temp->next->next;
            next->next=temp;
            if(prev!=NULL){
                prev->next=next;
                prev=prev->next;
            }
            else{
                prev=next;
                head=next;
            }
        }
        else{
            prev=temp;
            temp=temp->next;
        }
    }
    return bubblesort(head,length-1);
}
int lenghtll(node* head){
    if(head==NULL) return 0;
    return 1+lenghtll(head->next);
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
    int len=lenghtll(head);
    // cout<<len<<endl;
    head=bubblesort(head,len);
    printing(head);
    return 0;
}