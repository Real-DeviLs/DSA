#include<iostream>

using namespace std;


struct Node{

    int data;
    struct Node *next;
    
}*first;

void create(int A[], int n){

    int i;
    struct Node *t, *last;
    first = new Node;
    first ->data = A[0];
    first ->next = NULL;
    last = first;    

    for (i=1 ; i<n ;i++)
    {
        t = new Node;
        t->data = A[i];
        t->next =NULL;
        last->next = t;
        last = t;
    }
    }




void display(struct Node *p)
{ 
   while (p!=NULL)

   {
        cout<<p->data<<endl;
        p=p->next;    
    }
    
}  

void delete_first(struct Node*p) {
    //temporary pointer is made to store first
    struct Node*temp =new Node;
    temp = first;//first is assigned to temporary and is moved forward
    first  = first->next;
    delete temp;//deallocation


}


int main(){

    int A[]={1,2,3,4,5,6,7,8,9,10};
    create(A,10);
    display(first);

    delete_first(first);

    display(first);

    return(0);

}