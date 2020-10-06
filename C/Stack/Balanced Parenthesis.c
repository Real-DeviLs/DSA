#include <stdio.h>
#include <stdlib.h>
struct Node
{
char data;
struct Node *next;
}*top=NULL;
void push(char x)
{
struct Node *t;
t=(struct Node*)malloc(sizeof(struct Node));
if(t!=NULL)
{
t->data=x;
t->next=top;
top=t;

}
}
void pop()
{
struct Node *t;
char x;
if(top!=NULL)
{


t=top;
top=top->next;
x=t->data;
free(t);
}

}




int main(){

char str[10000];
scanf("%s",str);
int i=0;
int flag=0;
while(str[i]!='\0'){

    if(str[i]=='(')
        push('(');

    else if (str[i]==')'){


       if(top==NULL)
       {
          flag=1;
          break;
       }

       else
        pop();


    }
i++;
}

if(top==NULL&&flag==0)
    printf("Balanced");

else
    printf("Unbalanced");






return 0;
}
