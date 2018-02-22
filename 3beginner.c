#include<stdio.h>
int main()
{
char ch;
printf("Enter the alphabet:\n");
scanf("%s",&ch);
if(ch='a'||ch='e'||ch='i'||ch='o'||ch='u'||ch='A'||ch='E'||ch='I'||ch='O'||ch='U')
{
printf("\n%s is a vowel",ch);
}
else
{
printf("\n%s is a constant,ch");
}
return 0;
}
