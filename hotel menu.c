#include<stdio.h>
main()
{
	int meal, dish;
	printf("enter '1' for breakfast\n");
	printf("enter '2' for lucnh\n");
	printf("enter '3' for dinner\n");
	scanf("%d",&meal);
	if(meal==1)
	{
		printf("the dishes are 1. upma , 2. dosa , 3. paratha , 4. pav bhaji\n");
	}
	if(meal==2)
	{
		printf("the dishes are 1. veg thali , 2. chicken thali , 3. egg thali , 4. dal rice\n");
	}
	if(meal==3)
	{
		printf("the dishes are 1. veg thali , 2. chicken thali , 3. egg thali , 4. dal rice\n");
	}
	if(meal>3)
	{
		printf("invalid number\n");
	}
	if(meal<=3)
	{
	printf("enter the numbers of the dishes you want\n");
	scanf("%d",&dish);
		if(dish<=4)
		{
			printf("your order is placed\n");
		}
		if(dish>4)
		{
			printf("your dish number is invalid\n");
		}
	}
}
