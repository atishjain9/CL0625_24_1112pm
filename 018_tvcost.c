# include <stdio.h>

main()
{
	int cost,dis,ext,days,billamt;
	char mode;
	cost=dis=ext=days=billamt=0;
	
	printf("Enter Cost of the TV:");
	scanf("%d",&cost);
	
	printf("Are you Paying cash(y/n):");
	fflush(stdin); //cleaning the buffer
	scanf("%c",&mode);
	
	
	if(mode=='Y'||mode=='y')
	 {
	 	dis=cost*25/100;
	 	billamt=cost-dis;
 	  }
 	else
	     if(mode=='n'||mode=='N')
		    {
		    	printf("In How many Days will you Pay...:");
		    	scanf("%d",&days);
		    	
		    	if(days<7)
    			  {
  			        dis=cost*15/100;
				    billamt=cost-dis;	
  			      }
  			    else  
  			      {
      			  	ext=cost*10/100;
      			  	billamt=cost+ext;
      			  }
    			
    		} 
		  else
		  {
  		      printf("\aInvlaid mode Entered...");	 
  		      return;
		  }
	
 if(days<7)	
	printf("\nDiscount is:%d",dis);
 else	
	printf("\nExtra Amount is:%d",ext);
	
	printf("\nFinal Bill Amount :%d",billamt);
	
   printf("\n");
}