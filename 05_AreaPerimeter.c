#include<stdio.h>	//Preprocessor directive to include standard input output function header file
int main()
{	//start of main function body
	
	float raduisOfCircle, sideOfSquare, legthOfRectangle, breadthOfRectangle;	//variable declaration of float data type
	raduisOfCircle = 3,sideOfSquare = 6,legthOfRectangle = 9,breadthOfRectangle =5;	//value assigned
	
	printf("Area of Circle: %f",((22*raduisOfCircle*raduisOfCircle)/7));	//printf function calling for area of circle
	printf("\nPerimeter of Circle: %f",((2*22*raduisOfCircle)/7));	//printf function calling for perimeter of circle
	
	printf("\nArea of Square: %f",(sideOfSquare*sideOfSquare));	//printf function calling for printing area of square
	printf("\nPerimeter of Square: %f",(4*sideOfSquare));	//printf function calling for printing perimeter of square
	
	printf("\nArea of Rectangle: %f",(legthOfRectangle*breadthOfRectangle));	//printf function calling for printing area of rectangle
	printf("\nPerimeter of Rectangle: %f",(2*(legthOfRectangle+breadthOfRectangle)));	//printf function calling for printing perimeter of rectangle
	
	return 0;	//return statement
}	//end of main function body
