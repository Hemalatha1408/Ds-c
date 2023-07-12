#include<stdio.h>
#include<conio.h>
int main()
{
    int a[3][3], i, j, b[3][3];
    printf("Enter 3*3 Matrix Elements: ");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            scanf("%d", &a[i][j]);
    }
    // Transposing the Matrix...
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            b[j][i] = a[i][j];
    }
    printf("\nTranspose of given Matrix is:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            printf("%d  ", b[i][j]);
        printf("\n");
    }
    getch();
    return 0;
}