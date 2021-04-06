//Author name : Aditya Bawnoo 
//Creation date : 20 March 2021
// Purpose : Program to check prime number
#include <stdio.h> // Standard Input Output header file
int main()
{ // start of the main body
   int n, i, count = 0; // variable declaration
 
    printf("Enter the Number.\n"); // printf function calling for entering numbers
    scanf("%d",&n);// scanf function calling for taking input of the number entered by user.
 
    for(i=2; i<=n/2; ++i)
    {
        //Check for non prime number
        if(n%i==0)
        {
            count=1;
            break;
        }
    }
    //This will give the output.
    if (count==0)
        printf("%d is a Prime number.",n);
    else
        printf("%d is not a Prime number.",n);
 
    getchar();    
} // end of the main body
