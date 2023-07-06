#include<stdio.h>
main()
{
int n,a[5],i,ele;
printf("enter size of array");
scanf("%d",&n);
printf("enter elements in array");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter element to search");
scanf("%d",&ele);
for(i=0;i<n;i++)
if(a[i]==ele)
break;
 if(i<n)
  {
   printf("element is found");
  }
 else
  {
   printf("element not found");
  }
}
