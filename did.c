#include<stdio.h>
int main()
{
int a;
printf("enter value");
scanf("%d",&a);
if(a>='9' && a<='0')
{
printf("/n' %a' is an digit",a);
}
else
{
printf("'%a' is not an digit");
}
return(0);
}
