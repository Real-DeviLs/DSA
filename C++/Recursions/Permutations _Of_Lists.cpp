

/*Given a list of n distinct elements, write a function that lists all permutations of that list.*/

# include <iostream>

using namespace std;

void makePermutations(int arr[], int l, int r);
void swapArrayNumber(int arr[], int i, int j);

int main(){
    int n;
    cout << "Enter the no of elements in the array: ";
    cin >> n;
    int array1[n];
    cout << "Enter the elements in the array:\n";

    for(int i=0;i<n;i++){
        cin >> array1[i];
    }
    cout << "\nAll the permutations are: \n";
    makePermutations(array1,0,n);
    return 0;
}

void swapArrayNumber(int arr[], int i, int j){
    int t = arr[i];
    arr[i] = arr[j];
    arr[j] = t;
}

void makePermutations(int arr[], int l, int r){
    if(l == r-1){
        cout << "{";
        for(int j=0;j<r;j++){
            cout << arr[j] << ", ";
        }
        cout << "\b\b}";
        cout << endl;
        return;
    }
    else{
        for(int i=l;i<r;i++){
            swapArrayNumber(arr,l,i);
            makePermutations(arr,l+1,r);
            swapArrayNumber(arr,l,i);
        }
    }
}
