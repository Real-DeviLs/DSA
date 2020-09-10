# include <iostream>

using namespace std;

/*Given a list of n distinct elements, write a function that lists all subsets of those elements.*/

void allSubsets(int len,int pos,int arr[],int subset[],int c,int n);

int main(){
    int n;
    cout << "Enter the no of elements in the array: ";
    cin >> n;
    int array1[n];
    cout << "Enter the elements in the array:\n";
    for(int i=0;i<n;i++){
        cin >> array1[i];
    }
    int subset[n];
    allSubsets(0,0,array1,subset,0,n);
    return 0;
}

void allSubsets(int len,int pos,int arr[],int subset[],int c,int n){
    if (pos == n){
        cout << "{";
        if(c==0){
            cout << "  ";
        }
        for(int j=0;j<c;j++){
            cout << subset[j] << ", ";
        }
        cout << "\b\b}";
        cout << endl;
        return;
    }
    subset[len] = arr[pos];
    allSubsets(len+1,pos+1,arr,subset,c+1,n);

    allSubsets(len,pos+1,arr,subset,c,n);

}
