#include <iostream>
#include <queue>
using namespace std;

class Stack
{
    queue<int> q1;
    queue<int> q2;

public:
    void push(int d){
        if(q1.empty() and q2.empty()){
            q1.push(d);
        }
        else if(!q1.empty() and q2.empty()){
            q1.push(d);
        }
        else{
            q2.push(d);
        }
    }
    int top(){
        if(!q1.empty() and q2.empty()){
            while (q1.size()>1)
            {
                int f=q1.front();
                q1.pop();
                q2.push(f);
                /* code */
            }
            int temp=q1.front();
            q1.pop();
            q2.push(temp);
            return temp;
        }
        else if(q1.empty() and !q2.empty()){
            while (q2.size()>1)
            {
                int f=q2.front();
                q2.pop();
                q1.push(f);
                /* code */
            }
            int temp=q2.front();
            q2.pop();
            q1.push(temp);
            return temp;
        }
    }
    void pop(){
        if(!q1.empty() and q2.empty()){
            while (q1.size()>1)
            {
                int f=q1.front();
                q1.pop();
                q2.push(f);
                /* code */
            }
            int temp=q1.front();
            q1.pop();
            return;
        }
        else if(q1.empty() and !q2.empty()){
            while (q2.size()>1)
            {
                int f=q2.front();
                q2.pop();
                q1.push(f);
                /* code */
            }
            int temp=q2.front();
            q2.pop();
            return;
        }
    }
    bool empty(){
        if(q1.empty() and q2.empty()){
            return true;
        }
        return false;
    }
};

int main()
{
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}