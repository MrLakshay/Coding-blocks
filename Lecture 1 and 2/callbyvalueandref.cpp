#include<iostream>
using namespace std;


int ref(int &n){
    n+=1;
}int val(int n){
    n+=1;
}
int main(){
    int n;
    cin>>n;
    ref(n);
    cout<<n;
    val(n);
    cout<<n;
    return 0;
}