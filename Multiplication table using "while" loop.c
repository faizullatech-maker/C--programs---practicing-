#include<stdio.h>
int main()
{
    int a, product, i=1;
    printf("Enter a number:");
    scanf("%d",&a);
    while(i<=10)
    {
        product=a*i;
        i++;
        printf("%d\n", product);
    }
    return 0;
    
}