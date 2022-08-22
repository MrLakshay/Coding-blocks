#include<iostream>
using namespace std;
//void printarray(int a[5],int n){
void printarray(int a[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
}
int sum(int a[],int n){
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=a[i];
    }
    return sum;
    
}

int main(){
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(int);
    printarray(a,n);
    cout<<sum(a,n);
    return 0;
}