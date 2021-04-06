// Author name : Aditya bawnoo
// Creation date : 18 March 2021
//Purpose : Program to calculate Area/Perimeter of different shapes

#include <stdio.h> // Preprocessive directory to include standard input and output.
#include <math.h> // Including math header file from library
int main(){ // start of the main body
	char purpose; // variable declaration
	printf("Enter the mode of operation.\n 1.Area of Circle.\n 2.Area of Square.\n 3.Area of Rectangle.\n"); // printf function calling for mode of operation
	scanf("%c", &purpose); // scanf function calling for taking input of operation
	float value1, value2; // float variable declaration
	printf("Enter values of the shape:\n"); // printf function calling for entering values of the shape.
	scanf("%f %f", &value1, &value2); // scanf function calling for taking input of values entered by the user.
	switch(purpose) //Switch-Case Function used.
	{
		case'1':
			printf("Area of Circle = %f", ((22*value1*value1)/7)); // printf function calling for area of circle
			break; // break statement
		case'2':
			printf("Area of Square = %f", value1*value1); // printf function calling for area of square
			break;	// break statement
		case'3':
			printf("Area of Rectangle = %f", value1*value2); // printf function calling for area of rectangle
			break; // break statement
		
		default: // default statement
            printf("Error eccoured, Please enter the values correctly!"); // printf function calling for wrong values	
	} 
	return 0; 
} // end of main body
