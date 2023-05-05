#include<stdio.h>
int main()
{
    int a,b,choice;
    printf("Enter 2 nos: ");
    scanf("%d %d",&a,&b);
    printf("Enter choice of operation 1: Addition 2: Subtraction 3: Multiplication 4: Division :: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: printf("Result of Addition is : %d",a+b);
                break;
        case 2: printf("Result of Subtraction is : %d",a-b);
                break;
        case 3: printf("Result of Multiplication is : %d",a*b);
                break;
        case 4: printf("Result of Division is : %d",a/b);
                break;
        default: printf("You have made a wrong choice");
    }
}