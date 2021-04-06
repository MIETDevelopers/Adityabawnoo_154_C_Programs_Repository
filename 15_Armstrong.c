//Author name : Aditya Bawnoo 
//Creation date : 20 March 2021
// Purpose : Program to check  Armstrong number
#include <stdio.h> // preprocessive directory to include standard input and output
int main() { // start of the main body
  int num, originalNum, remainder, result = 0; // va
  printf("Enter a three-digit integer: \n"); // printf function calling for three digit number
  scanf("%d", &num);//scanf function calling for taking input of the number entered by user.
  originalNum = num;

  while (originalNum != 0) {
     //Formula
     // remainder contains the last digit
    remainder = originalNum % 10;
        
    result += remainder * remainder * remainder;
        
       // removing last digit from the orignal number
    originalNum /= 10;
  }

  if (result == num)
      printf("%d is an Armstrong number.", num);
  else
      printf("%d is not an Armstrong number.", num);

  return 0;
} // end of the main body
