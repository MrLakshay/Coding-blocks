#include<iostream>
using namespace std;
int bin(int a[],int n,int key){
    int start=0,end=n;
    while(end>=start){
        int mid=(start+end)/2;
        if(a[mid]==key){
            return mid;
        }
        else if(a[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
    
}
int main(){
    int b[4]={1,5,7,8};
    int n=4;
    int key=7;
    cout<<bin(b,n,key);
    return 0;
}