#include <stdio.h>
int main()
{
	float basic, DA, HRA, TA=1600;
	int net_salary;
	
	printf("Enter the basic salary:\n");
	scanf("%f",&basic);	
	
	DA = (basic*30)/100;
	
	HRA = (basic*10)/100;
	
	net_salary = basic + DA + HRA + TA;
	printf("The gross salary is:\n%d",net_salary);
}
