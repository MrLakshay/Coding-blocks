#include<iostream>
using namespace std;
//Pass by value 
void update(int *ptr){
    *ptr+=5;
}
int main(){

    int a=10;
    int *ptr=&a;
    cout<<*ptr<<endl;
    *ptr+=5;
    update(ptr);
    cout<<*ptr;
    return 0;
}