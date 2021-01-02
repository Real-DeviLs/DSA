# include <iostream>
using namespace std;
 
int main(){
    int A[10];
    int B[10];
    int C[10];

    int i, j, k, n, m, l, temp;
    cout<<"Merge Sort."<<endl;
    cout<<"Enter size of array A: "<<endl;
    cin>>n;
    cout<<"Enter elements of array A: "<<endl;
    for(i=0; i<n; i++){
        cin>>A[i];
    }
    cout<<"Enter size of array B: "<<endl;
    cin>>m;
    cout<<"Enter elements of array B: "<<endl;
    for(i=0; i<m; i++){
        cin>>B[i];
    }
    // Selection Sort for array A
    for(k=0; k<=n; k++){
        for(l=k+1; l<=n; l++){
            if(A[k]>A[l]){
                temp = A[k];
                A[k] = A[l];
                A[l] = temp;
            }
        }
    }
    // Selection sort for array B
    for(k=0; k<=m; k++){
        for(l=k+1; l<=m; l++){
            if(B[k]>B[l]){
                temp = B[k];
                B[k] = B[l];
                B[l] = temp;
            }
        }
    }
    for(i=j=k=0; i<n+m; ){
        if(A[j]<=B[k]){
            C[i++] = A[j++];
        }else{
            C[i++] = B[k++];
        }
        if(j==n || k==m){
            break;
        }
    }
    for(; j<n;){
        C[i++] = A[j++];
    }
    
    for(; k<m;){
        C[i++] = B[k++];
    }
    cout<<"Array after sorting: "<<endl;
    for(i=0; i<n+m; i++){
        cout<<"\t"<<C[i];
    }    
    cout<<endl<<endl;


    return 0;
}
