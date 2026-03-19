#include<stdio.h>
int main()
{
    int x,a=0,b=1,i,c;
    printf("Enter a number:");
    scanf("%d",&x);
    if(x<=0)
    {
        printf("Please enter a positive number");}
        else if(x==1)
       { 
           printf("%d",a);
       }
       else
       {
           printf("%d\n%d\n",a,b);
       }
    for(i=3;i<=x;i++)
    {
        c=a+b;
        printf("%d\n",c);
        a=b;
        b=c;
    }
    return 0;
    
}