# include <stdio.h>
main()
{
	int a,b,c;
	a=b=c=0;
	
	printf("Enter 3 nos...:");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>b)
		if(a>c)
			printf("%d is Biggest...",a);
		else
			printf("%d is Biggest...",c);
	else
		if(b>c)
			printf("%d is Biggest..",b);
		else
			printf("%d is Biggest..",c);				
			
	
  printf("\n");
}