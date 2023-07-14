#include<stdio.h>
main()
{
   int a[10],i,n,sum=0;
   printf("enter size");
   scanf("%d",&n);
   printf("enter the elements");
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
printf("sum of elements in an array:\n");
   sum=0;
   for(i=0;i<n;i++)
   sum=sum+a[i];
   printf("%d",sum);
}