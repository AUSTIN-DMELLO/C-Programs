#include<stdio.h>
main()
{
	int number;
	printf("enter the number\n");
	scanf("%d",&number);
	switch(number%2)
	{
		case 0:
            printf("%d is an even number\n",number);
            break;
        case 1:
            printf("%d is an odd number\n",number);
            break;
	}
}
