#include<stdio.h>
#include<math.h>
main()
{
	int a,b,c,disc;
	float root1,root2,real_part,img_part;
	printf("enter coefficients a, b and c :");
	scanf("%d %d %d",&a,&b,&c);
	disc=b * b - 4 * a * c;
	if(a==0)
	{
		printf("it is not a quadratic equation\n");
	}
	else
	switch(disc>0)
	{
		case 1: root1 = (-b + sqrt(disc)) / (2 * a);
        	   root2 = (-b - sqrt(disc)) / (2 * a);
    	printf("root1 = %.2f and root2 = %.2f\n", root1, root2);
    	break;
		
		case 0: 
			switch(disc==0)
			{
				case 1: root1 = root2 = -b / (2 * a);
        				printf("root1 = root2 = %.2f\n", root1);
        		break;
        		
        		case 0: real_part = -b / (2 * a);
        				img_part = sqrt(-disc) / (2 * a);
        				printf("root1 = %.2f+%.2fi and root2 = %.2f-%.2fi\n", real_part, img_part, real_part, img_part);
        		break;
        	} 
        break;
    		
	}
}
