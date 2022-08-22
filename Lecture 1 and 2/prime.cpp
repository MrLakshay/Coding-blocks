#include<iostream>
using namespace std;

//Froward Declaration

bool prime(int);
void printallprime(int);

int main(){
    int n;cin>>n;
    printallprime(n);
    return 0;
}
bool prime(int x){
    for(int i=2;i<=x-1;i++){
        if(x%i==0){
            return false;
        }
    }
    return true;
}
void printallprime(int n){
    for(int i=2;i<=n;i++){
        if(prime(i)){
            cout<<i<<" ";
        }
    }
}