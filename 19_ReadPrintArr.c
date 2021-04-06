//Author name : Aditya Bawnoo 
//Creation date : 20 March 2021
// Purpose : A C Program to read and print elements in two dimensional array.
#include<stdio.h> // Preprocessive directory to include standard input and output header file
int main(){ // start of the main body
   /* 2D array declaration*/
   int disp[3][4]; 
   /*Counter variables for the loop*/
   int i, j;
   for(i=0; i<3; i++) {
      for(j=0;j<4;j++) {
         printf("Enter value for disp[%d][%d]:", i, j);
         scanf("%d", &disp[i][j]);
      }
   }
   //Displaying array elements
   printf("Two Dimensional array elements:\n");
   for(i=0; i<3; i++) {
      for(j=0;j<4;j++) {
         printf("%d \n", disp[i][j]);
         if(j==4){
            printf("\n");
         }
      }
   }
   return 0;
} // end of the main body
