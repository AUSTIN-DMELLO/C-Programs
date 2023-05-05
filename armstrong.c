#include<stdio.h>
int main()
{
	int num,j=100,sum,r;
	printf("The armstrong numbers from 100 to 500 are:\n");
	while(j<=500)
	{
		sum=0;
		num=j;
		while(num!=0)
		{
			r=num%10;
			num=num/10;
			sum=sum+(r*r*r);
		}
		if(sum==j)
		{
		printf("%d\n",j);
		j=j+1;
		}
		else
		j=j+1;
	}
}
	