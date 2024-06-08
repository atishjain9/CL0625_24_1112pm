
//Program to swap the values of two variables A and B
# include <stdio.h>
main()
{
	int a,b,temp;
	a=b=temp=0;
	
	printf("Enter value for A:");
	scanf("%d",&a);
	
	printf("Enter value for B:");
	scanf("%d",&b);
	
	
	temp=a;
	a=b;
	b=temp;
	
	printf("\nA is:%d",a);
	printf("\nB is:%d",b);
	
	printf("\n");
}