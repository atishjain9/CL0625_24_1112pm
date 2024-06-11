# include <stdio.h>
main()
{
	int basic,allow,ded,gs,ns;
	basic=allow=ded=gs=ns=0;
	
	printf("Enter Basic Salary:");
	scanf("%d",&basic);
	
	printf("Enter Allowances:");
	scanf("%d",&allow);
	
	printf("Enter Deductions:");
	scanf("%d",&ded);
	
	gs = basic + allow;
	ns = gs - ded;
	
	printf("\nGross Salary:%d",gs);
	printf("\nNet Salary:%d",ns);
	
	

	printf("\n");
}