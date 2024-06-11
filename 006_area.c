# include <stdio.h>
main()
{
	float area,radius;
	const float PI=3.14;
	area=radius=0;
	
	printf("Enter Radius of a Circle...:");
	scanf("%f",&radius);
	
	area = PI * radius * radius;
	
	printf("Area of Circle for the radius %f is %f",radius,area);

	printf("\n");
}