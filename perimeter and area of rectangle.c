#include<stdio.h>
main()
{
	int ht,wd,peri,area;
	printf("enter height\n");
	scanf("%d",&ht);
	printf("enter width\n");
	scanf("%d",&wd);
	peri=2*ht+2*wd;
	area=ht*wd;
	printf("perimeter is %d\n",peri);
	printf("area is %d",area);
}
