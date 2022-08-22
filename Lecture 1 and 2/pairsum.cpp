#include<iostream>
using namespace std;
void pairsum(int a[],int n,int key){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==key){
                cout<<a[i]<<" "<<a[j]<<"  ";
            }
        }
    }
    return;
}
int main(){
    int a[6]={1,3,2,2,4,0};
    int n=6;
    int key=4;
    pairsum(a,n,key);
    return 0;
}