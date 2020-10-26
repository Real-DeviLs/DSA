#include <stdio.h>
int main()
{
    long long int num,temp,temp2,cal=0;
    printf("Enter the number:");
    scanf("%lld",&num);
    temp=num;
    while(temp!=0)
    {
        temp2=temp%10;
        cal=cal*10+temp2;
        temp=temp/10;
    }
    if(num==cal)
    printf("The number is Palindrome");
    else
    printf("The number is not Paliandrome");
    return 0; 
}
