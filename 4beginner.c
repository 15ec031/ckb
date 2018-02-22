#include<stdio.h>
int main()
{
char ch;
printf("Enter the charater:");
scanf("%c",&ch);
if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))
{
printf("\n%c is a alphabet",ch);
}
else
{
printf("\n%c is a not alphabet",ch);
}
return 0;
}
