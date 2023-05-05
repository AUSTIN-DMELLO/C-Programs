#include<stdio.h>
main()
{
	int p,n,r,si;
	printf("enter principal amount\n");
	scanf("%d",&p);
	printf("enter rate of interest\n");
	scanf("%d",&r);
	printf("enter no. of years\n");
	scanf("%d",&n);
	si=p*n*r/100;
	printf("Simple interest is \n%d",si);
}
