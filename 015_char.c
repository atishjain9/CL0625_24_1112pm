# include <stdio.h>
main()
{
  char ch;
  
  printf("Enter a character...:");
  scanf("%c",&ch);
  
  if(ch>=65 && ch<=90)
     printf("%c is a Uppercase Letter...",ch);
  else
      if(ch>=97 && ch<=122)
	  	printf("%c is Lowercase Letter...",ch);
	  else
	      if(ch>=48 && ch<=57)
		  	printf("%c is a Digit...",ch);
		  else
		     printf("%c is a Special Character...",ch);	  	     
			
	
  printf("\n");
}