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

Node *insert(Node *head,int position,int data){
    Node *temp=new Node(data);
    if(position==0){
        temp->next=head;
        head=temp;
    }
    else{
        for(int i=0;i<position;i++)
        head=head->next;
        temp->next=head->next;
        head->next=temp;
        
    }
    return head;

}

int main(){
    int a[]={2,3,4,5,6};
    Node *ptr=create(a,5);
    display(ptr);
    Node *newNode=insert(ptr,4,1);
    display(ptr);


}