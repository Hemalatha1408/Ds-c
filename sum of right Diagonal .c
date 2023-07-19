#include <stdio.h>
void main()
 
   {
     int i,j,a[10][10],sum=0,n;	 
	 printf("Input the size of the matrix : ");
     scanf("%d", &n); 
	 printf("Input elements in the matrix :\n");
       for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
	           scanf("%d",&a[i][j]);
			   if (i==j) 
       sum=sum+a[i][j];
            }
        }  
	  printf("The matrix is :\n");
	 for(i=0;i<n;i++)
	 {
	   for(j=0;j<n ;j++)
	     printf("%d",a[i][j]);
	    printf("\n");
	 }
 
       printf("Addition of the right Diagonal elements is :%d\n",sum);
    }
