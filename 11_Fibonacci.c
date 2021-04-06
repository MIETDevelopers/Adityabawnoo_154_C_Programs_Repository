//Author name : Aditya Bawnoo 
//Creation date : 20 March 2021
// Purpose : Program for fibonacci series
#include<stdio.h> // Preprocessive directive to include standard input and output header file.
 
int main(){  // start of the main body
   int n, first = 0, second = 1, next, c; //For the reference to the formuls of the series.
 
   printf("Enter the number of terms\n");  // printf function calling for number of terms
   scanf("%d",&n); // scanf function calling for the number of terms entered by user.
 
   printf("First %d terms of Fibonacci series are :-\n",n);  
 
   for ( c = 0 ; c < n ; c++ ) //ForLoop function for the reference to the formuls of the series.
   {
      if ( c <= 1 )
         next = c;
      else
      {
         //Formula to print the series.
         next = first + second;
         first = second;
         second = next;
      }
      printf("%d\n",next); //This will give the outpu.
   }
   return 0;
} // end of the main body
