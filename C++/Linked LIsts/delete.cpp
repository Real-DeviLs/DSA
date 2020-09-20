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

Node* del(Node *head,int data){

    Node *temp=head;
    Node *prev=head;
    if(head->data==data)
    head=head->next;
    delete(prev);
    while(temp->next && temp->data!=data){
        prev=temp;
        temp=temp->next;
        }
        
    if(!temp->next){
    prev->next=nullptr;
    }

    prev->next=temp->next;
    delete(temp);
    return head;
    }

void display(Node *head){

    if(!head)
    cout<<"";
    while (head!=nullptr) {
        cout<<head->data<<" ";
        head=head->next;
    }
}

int main(){

    int a[]={2};
    Node *ptr=create(a,1);
    del(ptr,2);
    display(ptr);


}