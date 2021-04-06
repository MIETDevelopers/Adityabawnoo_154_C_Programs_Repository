//Author name : Aditya Bawnoo 
//Creation date : 20 March 2021
// Purpose : Program to check maximum among numbers
#include <stdio.h> // preprocessive directive to include standard input and output header file
#include <conio.h> // console input and output header file

int main()
{ // start of the main body
  int i,num,n,large=0; // variable declaration

  //It will set the maximum number (Limit) of values to be entered by user based on their choice.
  printf("How many numbers: ");
  scanf("%d",&n); 
  
  for(i=0; i<n; i++)
  {
    //It will scan the numbers entered by user upto the limit setted by user.
    printf("\nEnter number %d: ",i+1);
    scanf("%d",&num);
    if(num>large)
    large=num;
  }

  printf("\nThe Largest number is %d",large); //It will give the largest number as the output.
  
  getch(); //  hold screen till any key is pressed
  return 0; // return statement
} // end of the main body
