# include <stdio.h>
main()
{
	char name[20],gender;
	int age=0;
	
	printf("Enter ur name:");
	scanf("%s",&name);
	
	printf("Enter ur Gender(M/F):");
	fflush(stdin);
	scanf("%c",&gender);
	
	printf("Enter ur age:");
	scanf("%d",&age);
	
	printf("\nName:%s",name);
	printf("\nGender:%c",gender);
	printf("\nAge:%d",age);
	
	printf("\n");
}