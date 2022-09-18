#include <iostream>
using namespace std;
class Vector
{
public:
    int cs;
    int cap;
    int *a;
    Vector(int s = 1)
    {
        a = new int[s];
        cs = 0;
        cap = s;
    }
    void push_back(int d)
    {
        if (cs == cap)
        {
            int *olda = a;
            int oldcap = cap;
            a = new int[2 * cap];
            cap *= 2;
            for (int i = 0; i < oldcap; i++)
            {
                a[i] = olda[i];
            }
            delete[] olda;
        }
        a[cs++] = d;
    }
    void pop_back(){
        if(empty()) {
            return;
        }
        cs--;
    }
    bool empty(){
        return cs==0;
    }
    int size(){
        return cs;
    }
    int capacity(){
        return cap;
    }
    int operator[]  (int i){
        // It tells the function what to do  when [] function is called
        return a[i];
    }
};
int main()
{
    Vector v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    cout<<v.capacity()<<endl; 
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[0]<<endl;

        //      v[i] is not known to program so we have to specify the what is does 
        //      by overloading the operator
    }
    
    return 0;
}