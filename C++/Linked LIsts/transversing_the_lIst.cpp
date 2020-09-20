#include<iostream>
#include<climits>
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

void Displayr( struct Node *p){
    if(p!=NULL){
        cout<<p->data<<"\t";
        Displayr(p->next);
    }
}

int count(struct Node *p){ 

    int count =0;
    while(p!=0){
        count++;
        p = p->next;
    }
    return count;

}
int countr(struct Node *p){


    if(p==0)
    return 0;
    else return( countr(p->next) +1);

}

int add(struct Node *p){

    int sum =0;
    while(p!=0)
    {
        sum = sum+ p->data;
        p = p->next;

    }
    return sum;
}

int addr(struct Node *p){   

    if(p==0)
    return 0;
    else
        return (addr(p->next)+p->data);
    

}

int max(struct Node *p){

    int mx = INT_MIN;
    if(p==0)
    return mx;
    else {

        while(p!=NULL){
            if(mx<p->data)
            mx= p->data;
            p=p->next;    
            
        }
        return mx;
    }

}

int maxr(struct Node *p){
    int x;    
    if(p==0)
    return INT16_MIN;
    else{
        x = max(p->next);
        if(x>p->data)
        return x;
        else return(p->data);
    }
}
int min(struct Node*p){
    int x=INT_MAX;
    while(p!=NULL){

        if(x<p->data)
        x=p->data;
        p = p->next;
    }
    return x; 
}

struct Node* search(struct Node*p ,int key){

    while(p!=NULL){
        if(key == p->data)
        return p;
        else p = p->next;
    }
    return NULL;

}

struct Node*searchr(struct Node*p,int key){

    if(p==0)
    return NULL;
    if(key == p->data) {
        return p;   
    }
    else searchr(p->next,key);
}

int main(){

    int A[] = {3,5,7,10,15};
    create(A,5);
    display(first);
    Displayr(first);//recursive version
    cout<<count(first)<<endl;
    cout<<countr(first)<<endl;//recursive version
    cout<<add(first)<<endl;
    cout<<addr(first)<<endl;//recursive version
    cout<<max(first)<<endl;
    cout<<min(first)<<endl<<"minimum Value";
    cout<<maxr(first)<<endl<<"recursion"<<endl;//recursive version
    cout<<search(first,15)<<endl;
    cout<<searchr(first,15)<<endl;//recursive version




    return 0;
}