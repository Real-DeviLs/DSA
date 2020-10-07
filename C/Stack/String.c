
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
int flag=0;
int flag1=0;
char str[10000];
scanf("%s",str);
int i=0;
while(str[i]=='a'){
    push('a');
i++;

}

while(str[i]!='\0'){

     if(str[i]=='a')
     {
     flag1=1;
     break;}
if(top==NULL)
   {
    flag=1;
    break;

   }

    else
    pop();

i++;
}

if(str[i]!='\0'&&flag1==1)
    printf("The given string is not in the proper format");
else{
    if(top==NULL&&flag==0)
   printf("YES");
   else
    printf("NO");
}









return 0;
}
