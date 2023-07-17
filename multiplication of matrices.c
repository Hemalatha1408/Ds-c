#include <stdio.h>

void main()
{
  int a[10][10],b[10][10],c[10][10],i,j,k,r1,r2,c1,c2,sum=0; 
  
  printf("\nenter the rows and columns of first matrix : ");
  scanf("%d %d",&r1,&c1);
  printf("\nenter the rows and columns of second matrix : ");
  scanf("%d %d",&r2,&c2);
  if(r1==c2)
  {
  printf("enter elements in the first matrix :\n");
  for(i=0;i<r1;i++)
  {
   for(j=0;j<c1;j++)
   {
	   scanf("%d",&a[i][j]);
   }
  }   
  printf("enter elements in the second matrix :\n");
  for(i=0;i<r2;i++)
  {
    for(j=0;j<c2;j++)
    {           
	    scanf("%d",&b[i][j]);
    }
  }    
//multiplication of matrix
  for(i=0;i<r1;i++)
   for(j=0;j<c2;j++)
     c[i][j]=0;
     for(i=0;i<r1;i++)    
     { 
      for(j=0;j<c2;j++)   
      {  
       sum=0;
       for(k=0;k<c1;k++)
       sum=sum+a[i][k]*b[k][j];
       c[i][j]=sum;
      }
     }
  printf("\nThe multiplication of two matrices is : \n");
  for(i=0;i<r1;i++)
  {
  printf("\n");
   for(j=0;j<c2;j++)
   {
  printf("%d\t",c[i][j]);
   }
  }
  }
printf("\n\n");
}
