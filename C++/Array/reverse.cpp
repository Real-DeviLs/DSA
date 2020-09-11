#include<iostream>
using namespace std;

/* the logic is to swap the the rightmost with the leftmost 
and then the second leftmost with second rightmost and so on till we reach mid */

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

/* dry run with a[5]={5,4,3,2,1}
i=4
swap a[4] and a[0]
{1,4,3,2,5}
i=3
swap a[3] and a[1]
{1,2,3,4,5}

i=2 and 2>=2 so
stop
*/