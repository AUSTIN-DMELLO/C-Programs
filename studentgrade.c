#include<stdio.h>
int main()
{
    int percentage;
    printf("Enter the percentage secured by a student: ");
    scanf("%d",&percentage);
    if(percentage>=60)
    {
        printf("Student secured First Class");
    }
    else if(percentage<60&&percentage>=50)
    {
        printf("Student secured Second Class");
    }
    else if(percentage<50&&percentage>=40)
    {
        printf("Student has passed");
    }
    else
    {
        printf("Student has failed");
    }
}