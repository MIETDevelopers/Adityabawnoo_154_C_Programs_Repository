//Author name   : Aditya Bawnoo
//Creation Date : 22 March 2021 
//Purpose       : for converting binary number to decimal number
#include<stdio.h> // Preprocessive directory to include standard input and output
#include<stdlib.h>  // Preprocessive directory for standard library functions
int main(){         // Start of the main body
int a[10],n,i;      // variable declaration of int data type
printf("Enter the number to convert: ");    // printf function calling for entering numbers for conversion
scanf("%d",&n); // scanf function calling for taking input of the number to convert   
for(i=0;n>0;i++)   // loop 
{    
a[i]=n%2;    
n=n/2;    
}    
printf("\nBinary of Given Number is=");    
for(i=i-1;i>=0;i--)    // loop
{    
printf("%d",a[i]);    
}    
return 0;  // return statement
}   // end of the main body

