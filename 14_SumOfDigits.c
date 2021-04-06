//Author name : Aditya Bawnoo 
//Creation date : 20 March 2021
// Purpose : C Program to Find Sum of Digits of a Number using While Loop.
#include <stdio.h> //  preprocessive directory to include standard input and output header file 
int main()
{ // start of the main body
  int Number, Reminder, Sum=0;

  printf("Please Enter any number\n"); // printf function calling for number 
  scanf("%d", &Number);// scanf function calling for taking input of the number entered by user.

  while(Number > 0)//Using while loop.
  {
  	//This is the formula to calculate sum of digits.
     Reminder = Number % 10;
     Sum = Sum+Reminder;
     Number = Number / 10;
  }

  printf("Sum of the digits of Given Number = %d\n", Sum); // printf function calling for output

  return 0;
} // end of the main body
