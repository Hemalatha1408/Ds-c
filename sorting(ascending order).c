#include <stdio.h>

void main()
{
  int i,n,a[5],j,temp;
  printf("enter size of the array");
  scanf("%d",&n);
  printf("enter elements in the array");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      if(a[i]<a[j])
       {
         temp=a[i];
         a[i]=a[j];
         a[j]=temp;
       }
    }
  }
  printf("elements sorted in ascending order");
  for(i=0;i<n;i++)
  printf("%d\n",a[i]);
}