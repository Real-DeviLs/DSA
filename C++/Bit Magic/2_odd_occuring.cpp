#include <iostream>
using namespace std;
int main()
{
    int arr[]={4,3,2,2,4,5,3,4,7,4};
    int n = sizeof(arr)/sizeof(int);
    int res1 = 0,res2 =0 ,num=0;
    for(int i=0;i<n;i++)
        num=num^arr[i];
    num=num & ~(num-1); //getting last set bit
    for(int i=0;i<n;i++)
    {
    	if((arr[i] & num) !=0)
    		res1=res1^arr[i];
    	else
    		res2=res2^arr[i];
    }
    cout<<res1<<" "<<res2<<endl;

    return 0;
}