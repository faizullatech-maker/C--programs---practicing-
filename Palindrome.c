#include<stdio.h>
int main()
{
int a,digit,rev=0,temp;
printf("Enter a number:");
scanf("%d",&a);
temp=a;
while(a>0)
{
digit=a%10;
rev=rev*10+digit;
a=a/10;
}
if(temp==rev)
printf("Given number is palindrome");
else
printf("Given number is not a palindrome");
return 0;
}
