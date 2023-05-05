/* Program to store elements in a 2 dimensional array */
#include<stdio.h>
main()
{
int i, j, rows, cols, arr1[i][j];
printf("\nEnter number of rows :");
scanf("%d",&rows);
printf("\nEnter number of columns :");
scanf("%d", &cols);
for(i=0; i< rows; i++)
{
for(j = 0; j < cols; j++)
{
printf("\nEnter value :");
scanf("%d", &arr1[i][j]);
}
}
printf("\nThe elements are\n");
for(i=0; i< rows; i++)
{
for(j = 0; j < cols; j++)
{
printf("%d\t", arr1[i][j]);
}
printf("\n");
}
}

