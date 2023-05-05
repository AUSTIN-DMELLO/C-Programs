#include<stdio.h>
main()
{
	char name[10], surname[10], address[30];
	printf("enter your name\n");
	scanf("%s",&name);
	printf("enter your surname\n");
	scanf("%s",&surname);
	printf("enter your address\n");
	scanf("%s",address);
	printf("your full name is\n%s %s\n",name,surname);
	
	printf("your address is \n%s",address);
}
	
