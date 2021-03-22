Created by : Aditya Bawnoo 
DATE: 17 March 2021
Purpose : Addition of two numbers
#include<stdio.h>       // Preprocessive directory to include standard input and output
int main()
{                       // Start of the main body
	int a,b,add,subt,mult;   // Variable declaration of int data type
	float divide;          // Variable declaration of float data type
	printf("Enter any two numbers"); // Printf function calling for Two numbers 
	scanf("%d%d",&a,&b);  // Scanf function calling for taking Input of two numbers.
	add=a+b;           // Addition of two numbers
	subt=a-b;          // Subtraction of two numbers
	mult=a*b;         // Multiplication of two numbers
	divide=a/b;      //Divison of two numbers
	printf("\nAddition of the numbers =%d\n",add);  // Printf function calling for Addition of two numbers
	printf("Subtraction of two numbers=%d\n",subt);  // Printf function calling for Subtraction of two numbers
	printf("multiplication of the two numbers =%d\n",mult); // Printf function calling for multiplication of two numbers
	printf("Divison of the two numbers =%f\n",divide);      // Printf function calling for divison of two numbers
	return 0;  // return statement
}
	
