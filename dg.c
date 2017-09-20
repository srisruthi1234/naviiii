#include<stdio.h>
int main()
{
int a;
printf("enter value");
scanf("%d",&a);
if(a>='0' && a<='9')
{
printf("/n' %a' is an digit",a);
}
else
{
printf("'%a' is not an digit");
}
return(0);
}
