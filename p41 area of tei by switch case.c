#include<stdio.h>
main()
{
	float h,b,r;
	int no1,no2;
	int opt;
	
	printf("\nEnter the 1 for area of tringle=>");
    printf("\nEnter the 2 for area of circle=>");
	printf("\nEnter the 3 for max =>");
	printf("\nEnter the 4 for nagative or positive=>");
    printf("\nEnter the option=>");
    scanf("%d",&opt);
    
    switch(opt)
    {
    case 1:
	{	
    	printf("\nEnter hegiht =>");
    	scanf("%f",&h);
    	printf("\nEnter base =>");
    	scanf("%f",&b);
    	printf("\nArea of tri = %.2f",h*b*0.5);
    	break;
    }
	
	case 2:
	{
		printf("\nEnter the radius=>");
		scanf("%f",&r);
		printf("\nArea of circle=%.2f",r*r*3.14);
		break;
	}
	case 3:
		{
			printf("\nEnter the no1=>");
			scanf("%d",&no1);
			
			printf("\nEnter the no2=>");
			scanf("%d",&no2);
			
			if(no1>no2)
			{
				printf("\nno1 is bigger");
			}
			else
			{
				printf("\nno2 is bigger");
			}
			break;
	}
			case 4:
				{
					printf("\nEnter the no1=>");
					scanf("%d",&no1);
					
					
					if(no1>0)
					{
						printf("\n it is positive no");
				    }
						else
						{
							printf("\n it is nagative no");
						}

					break;
				}
	
	default:
	{
		printf("\nWrong opt");
	}
}
}



