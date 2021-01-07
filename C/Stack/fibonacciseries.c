#include <stdio.h>
int main()
{
    int term,cal,temp=-1,temp1=1;
    printf("Enter the number: ");
    scanf("%d",&term);
    while(term!=0)
    {
        cal=temp+temp1;
        temp=temp1;
        temp1=cal;
        printf(" %d",cal);
        term--;
    }
}
