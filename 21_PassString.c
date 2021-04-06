//Author name : Aditya Bawnoo 
//Creation date : 20 March 2021
// Purpose : A C Program for passing string to a Function. 			
#include <stdio.h> // preprocessive directory to include standard input and output header file
void displayString(char str[]);

int main()
{ // start of the main body
    char str[50]; // Array declaration
    printf("Enter String: \n"); // printf function calling for entering string
    fgets(str, sizeof(str), stdin);  //This will read the user input.           
    displayString(str);     // Passing string to a function.    
    return 0;
}
void displayString(char str[])
{
	//This will give output.
    printf("String Output: ");
    puts(str);
}
