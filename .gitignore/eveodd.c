#include<stdio.h>
int main()
{
int n;
printf("enter the numbers: ");
scanf("%d",&n);
if(n%2==0)
{
printf("given number is even");
}
else if(n%2==1)
{
printf("given number is odd");
}
return 0;
}
