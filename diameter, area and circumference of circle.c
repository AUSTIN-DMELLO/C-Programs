#include<stdio.h>
main()
{
	int rad;
	const float pi=3.14;
	float area,circum,dia;
	printf("enter radius\n");
	scanf("%d",&rad);
	dia=rad*2;
	circum=2*pi*rad;
	area=pi*rad*rad;
	printf("diameter is %f\n",dia);
	printf("circumference is %f\n",circum);
	printf("area is %f\n",area);
}
