# include <stdio.h>
main()
{
	int tm,h,m;
	tm=h=m=0;
	
	printf("Enter Total Moive Time in Minutes...:");
	scanf("%d",&tm);
	
	h=tm/60;
	m=tm%60;
	
	printf("Heyy Movie Playing time is %d hrs and %d mins...",h,m);
	
	
	
	printf("\n");
}