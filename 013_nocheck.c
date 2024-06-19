# include <stdio.h>
main()
{
	int no=0;
	printf("Enter a no....:");
	scanf("%d",&no);
	
	if(no>0)
		printf("%d is Positive...",no);
	else
		if(no<0)
			printf("%d is Negative...",no);
		else
			printf("%d is Neutral...",no);		
	
	
	
  printf("\n");
}