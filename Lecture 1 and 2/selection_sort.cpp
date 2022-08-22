#include<iostream>
using namespace std;
void printarray(int a[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
}
void sort(int a[],int n){
    for (int i = 0; i < n-1; i++)
    {
        int mi=i;
        for (int j = i+1; j < n; j++)
        {
            if(a[j]<a[mi]){
                mi=j;
            }
        }
        int temp=a[i];
        a[i]=a[mi];
        a[mi]=temp;
        
    }
    
}

int main(){
    int a[]={5,234,2133,1,3,3};
    int n=sizeof(a)/sizeof(int);
    printarray(a,n);
    sort(a,n);
    printarray(a,n);
    return 0;
}