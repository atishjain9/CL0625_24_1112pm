//Total & Average Example

# include <stdio.h>
main()
{
	int m,p,c;
	float tot,avg;
	
	m=p=c=tot=avg=0;
	
	printf("Enter Marks for Maths...: ");
	scanf("%d",&m);
	printf("Enter Marks for Physics...: ");
	scanf("%d",&p);
	printf("Enter Marks for Chemistry...: ");
	scanf("%d",&c);
	
	tot=m+p+c;
	avg = tot/3;
	
	printf("\nTotal is:%.0f",tot);
	printf("\nAverage is:%.2f %%",avg);
	
	printf("\n");
}