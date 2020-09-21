//using move to head in search to improve the search of an element in linked list

#include<iostream>

using namespace std;

struct Node{

    int data;
    struct Node *next;
    
}*first;


struct Node* Search(struct Node*p , int key){

    struct Node * q = NULL;
    while(p!=0){
        if(p->data == key)
        q->next = p->next;
        p->next = first;
        return p;
    }
    q=p;
    p=p->next;
    return nullptr;
}
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




int main(){
 int A[] = {3,5,7,10,15,17};
    create(A,5);
    cout<<Search(first,17);



return 0;
}


