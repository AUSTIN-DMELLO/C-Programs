#include<stdio.h>
main()
{
	int hr,min;
	printf("enter time in minutes\n");
	scanf("%d",&min);
	hr=min/60;
	printf("time in hours is\n%d",hr);
}
