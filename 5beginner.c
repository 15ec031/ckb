#include<stdio.h>
int main()
{
double a,b,c;
printf("\nEnter the three different numbers:");
scanf("%lf,%lf,%lf",&a,&b,&c);
if(a>=b&& a>=c)
printf("%.2f is the largest number",a);
if(b>=c&& b>=a)
printf("%.2f is the largest number",a);
if(c>=a&& c>=b)
printf("%.2f is the largest number",a);
return 0;
}
