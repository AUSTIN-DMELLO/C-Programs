#include<stdio.h>
main()
{
char name[4] = "MARK";
int basic = 2500;
int daper = 55;
float bonper = 33.33, loandet = 250.00, salary;
salary = basic + basic * daper/100 + bonper*basic/100 - loandet;
printf(" Name		Basic		Salary\n");
printf(" %s		%d		%f",name,basic,salary);
}
