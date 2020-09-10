# include <iostream>

using namespace std;

void allSubsetsOfSizeK(int len,int pos,int arr[],int subset[],int c,int n,int k);

int main(){
    int n;
    cout << "Enter the no of elements in the array: ";
    cin >> n;
    int array1[n];
    cout << "Enter the elements in the array:\n";
    for(int i=0;i<n;i++){
        cin >> array1[i];
    }
    int k;
    cout << "Enter the number in which you want to see the number in combinations: ";
    cin >> k;
    int subset[n];
    allSubsetsOfSizeK(0,0,array1,subset,0,n,k);
    return 0;
}

void allSubsetsOfSizeK(int len,int pos,int arr[],int subset[],int c,int n,int k){
    if (len == k){
        cout << "{";
        for(int j=0;j<k;j++){
            cout << subset[j] << ", ";
        }
        cout << "\b\b}";
        cout << endl;
        return;
    }
    if (pos == n){
        return;
    }
    subset[len] = arr[pos];
    allSubsetsOfSizeK(len+1,pos+1,arr,subset,c+1,n,k);

    allSubsetsOfSizeK(len,pos+1,arr,subset,c,n,k);

}

