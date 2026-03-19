#include<stdio.h>
int main()
{
    int a,num,sum=0;
    printf("Enter a number:");
    scanf("%d",&a);
    while(a>0)
    {
        num=a%10;
        sum=sum+num;
        a=a/10;
    }
    printf("%d",sum);
    return 0;
}