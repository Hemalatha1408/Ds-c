#include<stdio.h>

int main()
{
  int a[5],n,i,ele=0,pos;
printf("enter size");
scanf("%d",&n);
printf("enter elements in an array");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter position");
scanf("%d",&pos);
for(i=pos-1;i<n;i++)
 a[i]=a[i+1];
 n--;
printf("after deletion");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
}