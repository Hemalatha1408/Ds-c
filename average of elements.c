#include<stdio.h>

int main()
{
int a[5],i,n,sum=0;
float avg;
printf("enter the size of array");
scanf("%d",&n);
printf("enter elements\t");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
 {
 sum=sum+a[i];
 }
avg=sum/n;
printf("avg=%f",avg);
}
