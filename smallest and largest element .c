#include<stdio.h>

int main()
{
int a[5],i,n,largest=0,smallest=0;
printf("enter the size of array");
scanf("%d",&n);
printf("enter elements\t");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
largest=a[0];
for(i=1;i<n;i++)//largest element
  { 
 if(largest<a[i])
 largest=a[i];
  }
printf("largest=%d\n",largest);
smallest=a[0];
for(i=1;i<n;i++)//smallest element
{
if(smallest>a[i])
smallest=a[i];
}
printf("smallest:%d",smallest);
}
 