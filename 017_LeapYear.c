# include <stdio.h>

main()
{
	
	int year=0;
	printf("Enter a year:");
	scanf("%d",&year);
	
	
	if(year%100==0)
	{
		if(year%400==0)
		   printf("%d year is a Leap Year..",year);
		else
		   printf("%d year is not a Leap Year...",year);
		     
	}
	else
	{
		if(year%4==0)
	       printf("%d is a Leap Year...",year);
	    else
	       printf("%d is a Not a Leap Year...",year);  
	}
  
  printf("\n");
}