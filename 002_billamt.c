//Program to Prepare Bill for inputted price of two choclates
# include <stdio.h>
int main()
{
    //variable declaration
    int p1,p2,amt;

    //variable initialization
    p1=0;
    p2=0;
    amt=0;

  //input statements
  printf("Welcome to Kiranamarket Stores");
  printf("\n------------------------------------------\n");

  printf("Enter price of Kitkat...:");
  scanf("%d",&p1);

  printf("Enter price of 5 Star...:");
  scanf("%d",&p2);

  //logic or process
  amt = p1 + p2;

  //output
  printf("Total Bill Amount is Rs..: %d",amt);

  printf("\nThank you for Purchase, Visit Again...");

  getch(); //makes your program to wait
  return 0;
}
