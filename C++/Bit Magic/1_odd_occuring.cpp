#include <iostream>
using namespace std;
int main()
{
    int arr[]={4,3,2,2,4,5,3};
    int n = sizeof(arr)/sizeof(int);
    int res = 0;
    for(int i=0;i<n;i++)
        res=res^arr[i];
    cout<<res<<endl;

    return 0;
}