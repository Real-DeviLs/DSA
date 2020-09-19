/* program to separate negative and positive elements of array */

#include<iostream>
using namespace std;

void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

void separate(int a[],int size){
    int low=0,high=size-1;
    while(low<high){
        while(a[low]<0)
        low++;
        while(a[high]>0)
        high--;
        if(low<high)
        swap(a[low],a[high]);
    }

}

int main(){

    int size, a[size];
    cout<<"enter size: ";
    cin>>size;
    cout<<"enter elements: ";
    for(int i=0;i<size;i++)
    cin>>a[i];
    separate(a,size);
    for(int i=0;i<size;i++)
    cout<<a[i]<<" ";

}


/* a dry run with a[5]={1,-2,3,-4,-5}
set low=0,high=4
a[low]>0 yes, 
a[high]<0 yes, so swap them, {-5,-2,3,-4,1}
i.e -5 shifts to the left and 1 shifts to the right
then a[low]=-5 so increment it
a[1]<-2 again increment 
a[2]>0 stop low=2
a[4]>0 decrement high 
a[3]<0 set high=3 and swap 2 and 3 {-5,-2,-4,3,1}
now low=2 and high=3
a[2]<0 increment low, low=3
a[3]>0 stop --->low=3
a[3]>0 decrement high
a[2]<0 stop --->high=2
low>high stop and over */