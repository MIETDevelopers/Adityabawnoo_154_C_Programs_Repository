//Author name : Aditya Bawnoo 
//Creation date : 20 March 2021
// Purpose : A C Program to swap two numbers using call by reference.               
#include <stdio.h> // preprocessive directive to include standard input and output header file
 
void swap(int*, int*);
 
int main()
{ // start of the main body
   int x, y; // variable declaration
 
   printf("Enter the value of x and y\n"); // printf function calling for two numbers ( x and y)
   scanf("%d%d",&x,&y);  //  scanf function calling for taking input of two numbers (x and y) entered by the user
 
   printf("Before Swapping\nx = %d\ny = %d\n", x, y);
 
   swap(&x, &y); 
 
   printf("After Swapping\nx = %d\ny = %d\n", x, y);
 
   return 0;
}
 
void swap(int *a, int *b)
{
   int temp;
   // Here swapping occurs.
   temp = *b;
   *b = *a;
   *a = temp;   
}
