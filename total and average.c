#include<stdio.h>
main()
{
	int math, chem, phy, total, avg;
	printf("enter math marks\n");
	scanf("%d",&math);
	printf("enter chem marks\n");
	scanf("%d",&chem);
	printf("enter phy marks\n");
	scanf("%d",&phy);
	total=math+chem+phy;
	avg=total/3;
	printf("total marks are %d\n",total);
	printf("average marks are %d\n",avg);
}
	
	
