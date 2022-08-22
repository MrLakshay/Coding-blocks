#include<iostream>
using namespace std;
int main(){
    int n=10;
    float f=1.234;
    char ch='a';
    int *nptr;
    float *fptr;
    char *chptr;


    nptr=&n;
    fptr=&f;
    chptr=&ch;
    
    
    cout<<fptr<<endl;
    cout<<nptr<<endl;


    // Type casting address to integer pointer to print the address rather than the values to fool the compiler 

    cout<<(int*)chptr<<endl;

    cout<<chptr<<endl;
    
    
    cout<<&n<<endl;
    cout<<&f<<endl;
    
    
    
    cout<<(int*)&ch<<endl;
    
    return 0;
}