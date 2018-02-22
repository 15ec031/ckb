#include<stdio.h>
int main()
{
long long num;
int count=0;
printf("Enter the number:\n");
scanf("%lld",&num);
count=log10(num)+1;
printf("%d is the digit count of the number give.",count);
}
