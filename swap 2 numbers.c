#include<stdio.h>
main()
{
	int num1,num2;
	printf("enter first number\n");
	scanf("%d",&num1);
	printf("enter second number\n");
	scanf("%d",&num2);
	num1=num1+num2;
	num2=num1-num2;
	num1=num1-num2;
	printf("first number after swapping is \n%d\n",num1);
	printf("second number after swapping is \n%d",num2);
}
	
