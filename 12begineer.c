#include<stdio.h>
int main()
{
int n,onum,rem,rnum=0;
printf("Enter a number to check palindrom:\n");
scanf("%d",&n);
onum=n;
while(n!=0)
{
rem=n%10;
rnum=rnum*10+rem;
n=n/10;
}
if(onum==rnum)
{
printf("The given no is a palindrom");
}
else{
printf("The given no is not a palindrom");
}
return 0;
}
