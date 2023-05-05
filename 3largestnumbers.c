#include <stdio.h>

int main()
{
    int a, b, c, big;

    printf("Enter 3 nos:");
    scanf("%d %d %d", &a, &b, &c);

    big = (a>b && a>c) ? (a) : ( (b>c)?(b):(c) );

    printf("Largest is %d\n", big);
}