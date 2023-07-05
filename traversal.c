#include<stdio.h>
main()
{
int i,n,a[5];
printf("enter size of the array");
scanf("%d",&n);
printf("enter elements");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("accessing each element");
for(i=0;i<n;i++)
printf("%d\n",a[i]);
}