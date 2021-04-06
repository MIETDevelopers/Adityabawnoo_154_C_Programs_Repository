//Author name : Aditya Bawnoo 
//Creation date : 20 March 2021
// Purpose : A C Program to read the string in pointers loaction and give it as output.(Pre-Defined) 			
#include <stdio.h> // preprocessive directory to include standard input and output header file

int main(void) {
  char name[] = "Aditya Bawnoo";

  printf("%c \n", *name);     	// Output will be A
  printf("%c \n", *(name+3));	// Output will be I
  printf("%c \n", *(name+8));   // Output will be A

  char *namePtr;

  namePtr = name;
  printf("%c \n", *namePtr);     // Output will be A
  printf("%c \n", *(namePtr+2)); // Output will be I
  printf("%c \n", *(namePtr+7)); // Output will be B
}
