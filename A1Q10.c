#include<stdio.h>
#define SIZE 20
int main()
{
    int a[SIZE], i,j,row, spi, space=36;
    printf("Enter number of rows: ");
    scanf("%d", &row);
    for(i=0;i< row;i++)
    {
        for(spi=1; spi<=space; spi++)
        {
            printf(" ");
        }
        a[i] = 1;
        for(j=0; j<=i; j++)
        {
            printf("%6d", a[j]);
        }
        for(j=i; j>=1; j--)
        {
            a[j] = a[j] + a[j-1];
        }
        space = space-3;
        printf("\n");
    }
}