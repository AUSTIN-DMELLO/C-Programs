#include<stdio.h>
main()
{
	int number;
	printf("enter a natural number: ");
	scanf("%d",&number);
	if(number<=0)
	{
	printf("%d is not a natural number\n",number);
	}
	else
	do
	{
		printf("%d\n",number);
		number--;
	}
	while(number>=1);
}
