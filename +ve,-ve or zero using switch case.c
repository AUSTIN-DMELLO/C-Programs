#include<stdio.h>
int main()
{
	int number;
	printf("enter the number\n");
	scanf("%d",&number);
	switch (number>0)
    {
        case 1: printf("%d is positive", number);
        break;
        
        case 0:
            switch (number<0)
            {
                case 1: printf("%d is negative",number);
                break;
                
                case 0: printf("%d is zero",number);
                break;
            }
        break;
    }
}
