//Author name : Aditya Bawnoo 
//Creation date : 20 March 2021
// Purpose : C Program to calculate Factorial of a number. 

#include<stdio.h> // Preprocessive directory to include input and output header file  
int main()       
{    // start of the main body
 int i,fact=1,number;    // variable declaration
 printf("Enter a number: ");    // printf function calling for entering number
  scanf("%d",&number);    // scanf function calling for taking input of  number entered by user.
    for(i=1;i<=number;i++){    // loop
      fact=fact*i;   //Formula 
  }    
  printf("Factorial of %d is: %d",number,fact);    //printf function calling for output.
return 0;  
} // end of the main body
