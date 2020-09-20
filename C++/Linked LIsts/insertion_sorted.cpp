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
            cout<<"\n";
}

Node *insert(Node *head, int data){
    Node *temp=new Node(data);
    Node *ptr=head;
    Node *prev_ptr=head;
        while(ptr && ptr->data<data){
            prev_ptr=ptr;
            ptr=ptr->next;}
        temp->next=prev_ptr->next;
        prev_ptr->next=temp;
    
    return head;

}

int main(){
    int a[]={2,3,4,6};
    Node *ptr=create(a,4);
    display(ptr);
    Node *newNode=insert(ptr,5);
    display(ptr);

}