#include <iostream>
#include <vector>
using namespace std;
class Stack
{
    vector<int> v;

public:
    void push(int data)
    {
        v.push_back(data);
    }
    void pop()
    {
        v.pop_back();
    }
    bool empty()
    {
        return v.size() == 0;
    }
    int top()
    {
        int idx = v.size() - 1;
        return v[idx];
    }
    int size()
    {
        return v.size();
    }
};
StackLL* head=NULL;
class StackLL
{
public:
    int data;
    StackLL *next;
    StackLL(int x)
    {
        x = data;
        next = NULL;
    }
    void push(int x){
        if(head==NULL){
            head=new StackLL(x);
            return;
        }
        StackLL* nd=new StackLL(x);
        nd->next=head;
        head=nd;
    }
    void pop(){
        StackLL* ptr = head->next;
        delete head;
        head=ptr;
    }
    bool empty(){
        if(head==NULL) return true;
        return false;
    }
    int top(){
        return head->data;
    }
};
int main()
{
    // Stack s;
    // s.push(1);
    // s.push(2);
    // s.push(3);
    // s.push(4);
    // while (!s.empty())
    // {
    //     cout << s.top() << " ";
    //     s.pop();
    // }
    Stackll s;
    
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}