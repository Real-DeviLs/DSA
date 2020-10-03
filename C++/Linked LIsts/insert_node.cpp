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

void insert(int pos ,int x){

        struct Node *t,*p;
        if(pos ==0){
            t = new Node;
            t->data =x;
            t->next =first;
            first = t;
        }
        if(pos>0)
        {
            p = first;
            for(int i=0;i<pos-1;i++){
                p = p->next;}
                if(p)
                {
                    t=new Node;
                    t->data =x;
                    t->next = p->next;
                    p->next =t;
                }
            


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

void insert_last(int x){

    struct Node*t = new Node;
    struct Node*last;
    t->data = x ;
    t->next = NULL;
    if(first==NULL)
        first=last = t;
    
    else 
        last->next =t;
        last = t;      



}


int main(){

    int A[]={1,2,3,4,5,6,7,8,9,10};
    create(A,10);
    display(first);
    cout<<endl<<endl;
    insert(5,2520);
    cout<<endl<<endl;
    insert_last(65);
    display(first);
    cout<<endl<<endl;

    return(0);

}