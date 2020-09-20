/* write a program two merge two arrays
array1 of size m and array2 of n with
array1 sufficientl large to hold m+n-1 elements
merge all the elements into array1 */

#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>&a1,vector<int>&a2,int m,int n){
    vector<int>a3(m+n,0);
    int low1=0,low2=0,low3=0;
    while(low1<m && low2<n){
        if(a1[low1]<a2[low2])
        a3[low3]=a1[low1++];
        else a3[low3]=a2[low2++];
        low3++;
    }
    while(low1<m) a3[low3++]=a1[low1++];
    while(low2<n) a3[low3++]=a2[low2++];
    
    a1=a3;

}
int main(){
    vector<int>a1(7,0);
    a1={2,4,5,6};
    vector<int>a2={1,2,5};
    merge(a1,a2,4,3);
    for(int i=0;i<a1.size();i++)
    cout<<a1[i]<<" ";
}