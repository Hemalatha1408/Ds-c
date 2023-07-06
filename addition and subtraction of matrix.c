#include<stdio.h>

int main()
{
int a[10][10],b[10][10],e[10][10],s[10][10];
int r,c,i,j,k;
printf("enter the size of the rows and columns of matrix");
scanf("%d\t%d",&r,&c);
if(r==c)
{
printf("enter the elements of first matrix");
for(i=0;i<r;i++)
{
 for(j=0;j<c;j++)
 {
  scanf("%d",&a[i][j]);
 }
}
printf("enter the elements of second matrix");
for(i=0;i<r;i++)
{
 for(j=0;j<c;j++)
 {
  scanf("%d",&b[i][j]);
 }
}
//addition of matrix
printf("addition of matrices\n");
for(i=0;i<r;i++)
{
 for(j=0;j<c;j++)
 {
  e[i][j]=a[i][j]+b[i][j];
  }
}
for(i=0;i<r;i++)
{
 for(j=0;j<c;j++)
 {
  printf("%d\t",e[i][j]); 
  }
  printf("\n");
}
//subtraction of matrices
printf("subtraction of matrices\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
 {
s[i][j]=a[i][j]-b[i][j];
 }
}
for(i=0;i<r;i++)
{
 for(j=0;j<c;j++)
 {
  printf("%d\t",s[i][j]);
 } 
  printf("\n");
}
}
else
printf(" addition and subtraction not posible");
}

