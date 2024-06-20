# include <stdio.h>

main()
{
	char ms,gen;
	int age;
	
	printf("Enter Marital status([M]arried/[U]nmarried):");
	scanf("%c",&ms);
	printf("Enter ur Gender([M]ale/[F]emale):");
	fflush(stdin);
	scanf("%c",&gen);
    printf("Enter ur age:");
	scanf("%d",&age);
	
	if( (ms=='M' || ms=='m') || (gen=='M' || gen=='m' && age>=30) || (gen=='F' || gen=='f' && age>=25) )
	   printf("Ur Eligile for Bonus...");
	else
     	printf("Ur Not Eligible for Bonus..");
	
   printf("\n");
}