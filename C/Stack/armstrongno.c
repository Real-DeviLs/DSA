#include <stdio.h>
#include <math.h>
int main()
{
    int num,temp,temp2,n=0,cal=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    temp=num;
    while(num!=0)
    {
        num/=10;
        ++n;
    }
    num=temp;
    while(temp!=0)
    {
        temp2=temp%10;
        cal=cal+pow(temp2,n);
        temp/=10;
    }
    if(num==cal)
    printf("Number is Armstrong");
    else
    printf("Number is not Armstrong");
    return 0;
}
