#include<stdio.h>
int main()
{
    int a,i,fact=1;
    printf("Enter a number to find it's factorial:");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        fact=fact*i;
    }
        printf("factorial of %d is=%d\n",a,fact);
    return 0;
}