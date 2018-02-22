#include<stdio.h>
int main()
{
int n,e;
int p;
printf("Enter the number:\n");
scanf("%d",&n);
printf("Enter the exponent:\n");
scanf("%d",&e);
p=pow(n,e);
printf("%d is the power value",p);
return 0;
}
