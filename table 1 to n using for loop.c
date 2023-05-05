#include<stdio.h>
main()
{
	int i,j,number;
	printf("enter the number till which you want to find table: ");
	scanf("%d",&number);
	for(j=1;j<=10;j++)
	{
		for(i=1;i<=number;i++)
		{
			printf("%d\t",i*j);
		}
		printf("\n");
	}	
}
