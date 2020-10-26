#include <stdio.h>
int main()
{
    double num,cal=1;
    printf("Enter the number: ");
    scanf("%lf",&num);
    while(num!=0)
    {
        cal=cal*num;
        num--;
    }
    printf("Factorial is: %.0lf",cal);
    return 0;
}
