#include<stdio.h>
#include<string.h>
main()
{
int i,n,a[5];
printf("enter size");
scanf("%d",&n);
printf("enter elements in an array");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("printing elements in reverse");
for(i=n-1;i>=0;i--)
printf("%d\t",a[i]);
}