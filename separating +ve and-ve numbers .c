#include<stdio.h>

int main()
{
int a[10],i,n;
printf("enter the size of array");
scanf("%d",&n);
printf("enter elements\t");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("postive numbers are\n");
for(i=0;i<n;i++)
  if(a[i]>0)
  {
  printf("%d\n",a[i]);
  }
printf("negative numbers are\n");
for(i=0;i<n;i++)
 if(a[i]<0)
 {
 printf("%d\n",a[i]);
 }
}