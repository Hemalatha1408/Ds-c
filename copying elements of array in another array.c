#include<stdio.h>

int main()
{
int n,i,a[5],b[5];
printf("enter size\n");
scanf("%d",&n);
printf("enter elements\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("copying the elements of an array\n");
for(i=0;i<n;i++)
b[i]=a[i];
for(i=0;i<n;i++)
printf("%d\t",b[i]);
}