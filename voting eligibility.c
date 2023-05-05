#include<stdio.h>
main()
{
	int age;
	printf("enter your age\n");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("You are eligible to cast your vote\n");
	}
	else
		printf("You are not eligible to cast your vote\n");
	
}
