#include<iostream>
using namespace std;

void reverse(int a[],int size){
    for(int i=size-1;i>size/2;i--){
        int temp;
        temp=a[i];
        a[i]=a[size-i-1];
        a[size-i-1]=temp;
    }
}

int main(){

    int size;
    cout<<"enter size of array ";
    cin>>size;
    int a[size];
    cout<<"enter elements ";

    for(int i=0;i<size;i++)
    cin>>a[i];

    reverse(a,size);

    for(int i=0;i<size;i++)
    cout<<a[i]<<" ";
    
}