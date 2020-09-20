#include<iostream>
using namespace std;

class Node{
    
    public:
    int data;
    Node *next;
    Node(int data){
        this->data=data;
        next=NULL;
    }
};

Node *create(int a[], int n){
    Node *head=new Node(a[0]);
    head->next=NULL;
    if(n==1)
    return head;
    Node *ptr=head;
    for(int i=1;i<n;i++){
       Node *temp=new Node(a[i]);
       ptr->next=temp;
       temp->next=NULL;
       ptr=temp;
   }

    return head;
}

void display(Node *head){

    if(!head)
    cout<<"";
    while (head!=nullptr) {
        /* code */
        cout<<head->data<<" ";
        head=head->next;
    }
}
 
bool is_sorted(Node *head){
    Node *prev=head;
    Node *ptr=head->next;
    if(!ptr || !head) return true;
    while(ptr && prev){
        if(prev->data>ptr->data)
        return false;
        prev=ptr;
        ptr=ptr->next;
    }
    return true;

}
 

int main(){
    int a[]={1,1,1,1,1};
    Node *ptr=create(a,5);
    display(ptr);
    cout<<is_sorted(ptr);

}