#include<stdio.h>

int main()
{
int a[5],n,i,smallest,largest,difference;
printf("enter size");
scanf("%d",&n);
printf("enter elements");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
largest=a[0];
for(i=0;i<n;i++)
if(largest<a[i])
largest=a[i];
smallest=a[0];
for(i=0;i<n;i++)
if(smallest>a[i])
smallest=a[i];
difference=largest-smallest;
printf("The difference between 1argest and smallest element=%d",difference);
}
