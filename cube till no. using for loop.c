#include<stdio.h>
main()
{
	int i,j;
	printf("enter number till which you want to find cube: ");
	scanf("%d",&j);
	for(i=1;i<=j;i++)
	{
		printf("%d\n",i*i*i);
	}
}
