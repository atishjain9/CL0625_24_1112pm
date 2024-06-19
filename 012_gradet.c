# include <stdio.h>
main()
{
	float avg=0;
	
	printf("Enter Average Marks....:");
	scanf("%f",&avg);
	
	if(avg>100 || avg<0)
	{
		printf("\aInvalid Marks....\n");
		return;
	}
	
	if(avg>=60)
	  printf("First class...");
	else if(avg>=50)
			printf("Second Class...");
		else
			if(avg>=40)
				printf("Third Class....");
			else
				printf("Failed..");		  
	  
	
	
  printf("\n");
}