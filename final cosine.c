#include <stdio.h>
#include <math.h>
int main()
{    
    int k;         
    float x, epsilon=0.00001, sum, term; 
	printf("Input the angle in radians: ");     
    scanf("%f",&x);
    sum=1, term=1, k=0;
    x=fmod(x,6.28318);
    while (term >= epsilon || -term >= epsilon) 
    {
        k+=2;
        term*=-(x*x)/(k*(k-1));
        sum+=term;
    }
    printf("Value is %.3f\n",sum);
}
