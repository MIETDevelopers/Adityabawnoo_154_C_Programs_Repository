Author        : Aditya Bawnoo
Creation Date : 21 March
Purpose       : To make simple calculator
#include <stdio.h> // Pre processive directory to include standard input output function 

void main()
{                               // Start of the main body
	char op;                   // Variable declaration
	float a,b,c;              // Variable declaration
	printf("/nEnter two numbers: ");  // printf function calling to print 2 numbers
	scanf("%f%f",&a,&b);             // scanf function calling for taking input of 2 numbers from the user
start : printf("/n/nEnter operator (+,-,*,/)"); // printf function calling for printing the operators
scanf("%c",&op);     // scanf function calling for taking input of the operator

	switch(op) // start of switch case body
	{
		case'+':
		c = a+b; // Addition of two numbers
		break;
	
	case '-':
		c = a-b; // Subtraction of two numbers
		break;
		
	case '/':
		c = a/b; // Divison of two numbers
		break;
		
	case '*' :
		c=a*b; // Multiplication of two numbers
		break;
		default: // Default statement
		printf("Invalid operator"); // printf function calling for invalid operator
		goto start;  
	}
	printf("result = %f",c);
	return 0;
}
	
	

