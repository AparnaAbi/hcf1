# hcf1
#include<stdio.h>
main()
{
int a,b,i,max;
printf("enter the nos:");
scanf("%d%d",&a,&b);
if(a>b)
max=a;
else
max=b;
for(i=max;i>0;i--)
{
	if(a%i==0&&b%i==0)
	{
	printf("the HCF is %d",i);
	break;
}
}
}
