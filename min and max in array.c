#include <stdio.h> 
main()
{
    int a[10],i,min,max;
   
    printf("Enter 10 elements in array:\n");
    for(i=0; i<10; i++)
    {
        scanf("%d",&a[i]);
    }
 
    min=max=a[0];
    for(i=1; i<10; i++)
    {
         if(min>a[i])
		  min=a[i];   
		   if(max<a[i])
		    max=a[i];       
    }
     printf("minimum of array is : %d",min);
          printf("\nmaximum of array is : %d",max);
 
 
}
