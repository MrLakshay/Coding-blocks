#include<iostream>
using namespace std;



int fact(int x){
    int ans=1;
    for(int i=1;i<=x;i++){
        ans*=i;
    }
    return ans;
}
int ncr(int n,int r){
    int a=fact(n);
    int b=fact(r);
    int c=fact(n-r);
    return a/(b*c);
}
int main(){
    int n,r;
    cin>>n>>r;
    cout<<ncr(n,r)<<endl;
    //cout<<fact(n)<<endl;
    return 0;
}