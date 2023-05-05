#include<stdio.h>
main()
{
    char first_name[15], last_name[15];
    printf("enter your first name\n");
    scanf("%s",&first_name);
    printf("enter your last name\n");
    scanf("%s",&last_name);
    printf("Your name is \n%s %s", last_name, first_name);
}
