#include<stdio.h>
int main()
{
    int a,num,rev=0;
    printf("Enter a number to reverse:");
    scanf("%d",&a);
    while(a>0)
    {
       num=a%10;
       rev=rev*10+num;
       a=a/10;
    }
    printf("%d",rev);
    return 0;
}