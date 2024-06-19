# include <stdio.h>
main()
{
	int sales,dis,final_amt;
	
	sales=dis=final_amt=0;
	
	printf("Enter sales Amount:");
	scanf("%d",&sales);
	
	if(sales>=25000)
	  dis=sales*10/100;
	else
	  dis=sales*5/100;
	  
	 final_amt = sales - dis;
	 
	 printf("\nDiscont is:%d",dis);
	 printf("\nFinal Amount is:%d",final_amt);
	  
	
  printf("\n");
}