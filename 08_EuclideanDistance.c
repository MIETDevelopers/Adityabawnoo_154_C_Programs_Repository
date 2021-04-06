//Author name : Aditya Bawnoo
creation date : 22 March 2021
// Purpose : C Program to calculate distance between two points.
#include<stdio.h> // preprocessive directory to include standard input and output. 
#include<math.h>  //Including maths header file from library/
  
int main()  
{  // start of the main body
    float x1, y1, x2, y2, distance; //Declaring variables. 
  
    printf("Enter x1"); // Printf function calling for x1
  
    scanf("%f" &x1);  // scanf function calling for taking input of x1 by the user
  
    printf("Enter X2"); // Printf function calling for x2
  
    scanf("%f" &x2);  // scanf function calling for taking input of x2 by the user 
  
    printf("Enter y1"); // printf function calling for y1.
  
   scanf("%f",&y1);     // scanf function calling for taking input of y1 by the user
  
   printf("Enter y2");  // printf function calling for entering y2
  
   scanf("%f",&y2);   // scanf function calling for taking input of y2 by the user.
  
  
  
    distance = sqrt( (x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1) ); //Euclidean Distance's formula. 
  
    printf("Distance between (%0.2f, %0.2f) and (%0.2f, %0.2f) is %0.2f\n", x1, y1, x2, y2, distance); //Displaying calculated answer. 
  
    return 0;
} // end of the main body
