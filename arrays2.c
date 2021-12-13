#include<stdio.h>
int main()
{
int a[10],i;
printf("enter 5 number integer\n");
for(i=0;i<5;i++)
scanf("%d",&a[i]);

printf("elements of arrays:\n");
for(i=4;i>=0;i--)
printf("%d\n",a[i]);
return 0;

	
}
