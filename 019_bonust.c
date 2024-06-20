# include <stdio.h>

main()
{
	char ms,gen;
	int age;
	
	printf("Enter Marital status([M]arried/[U]nmarried):");
	scanf("%c",&ms);
	
	if(ms=='M' || ms=='m')
	   printf("Ur Eligile for Bonus...");
	else
	    if(ms=='U' || ms=='u')
	    {
	    	printf("Enter ur Gender([M]ale/[F]emale):");
	    	fflush(stdin);
			scanf("%c",&gen);
			
			if(gen=='M'||gen=='m'||gen=='F'||gen=='f')
			{
			 printf("Enter ur age:");
			 scanf("%d",&age);
			
			 if(gen=='M' || gen=='m')
			   if(age>=30)
			   	printf("Ur Eligible for Bonus..");
			   else
			   	printf("Ur Not Eligible for Bonus..");
			 else
			     if(gen=='F' || gen=='f')
			 	   if(age>=25)
				      printf("Ur Eligible for Bonus..");
				   else
				      printf("Ur Not Eligible for Bonus.."); 
			}
   			else
			    printf("\aInvalid Gender...");     
    		
    	}
		else
		   printf("\aInvalid Marital Status...");   
	
	
   printf("\n");
}