//Author name : Aditya Bawnoo
// Creation date : 18 March 2021
//Purpose : Program for Arithmetic operators 
#include<stdio.h> // Preprocessive directive  to include standard input and output.
int main()
{  //Start of main function body
   
   int num1, num2, add, subtract, multiply;  //variable declaration of integer data type
   float divide;  //variable declaration of float data type
 
   printf("Enter two numbers\n");   //printf function calling to print two numbers
   scanf("%d%d", &num1, &num2);  //taking input from user
 
   add = num1 + num2;   //formula for addition
   subtract = num1 - num2;  //formula for subtraction
   multiply = num1 * num2;  //formula for multiplication
   divide = num1 / (float)num2;   //formula for division

   printf("Sum = %d\n", add); //printf function calling to print sum
   printf("Difference = %d\n", subtract); //printf function calling to print difference
   printf("Multiplication = %d\n", multiply);   //printf function calling to print multiplication 
   printf("Division = %.2f\n", divide);   //printf function calling to print division
 
   return 0;   //return statement
}
//end of main function body
