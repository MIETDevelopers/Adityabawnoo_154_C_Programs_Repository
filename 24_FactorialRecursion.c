//Author name : Aditya Bawnoo 
//Creation date : 20 March 2021
// Purpose : A C Program to print factorial using recursion.	 			20/March/2021
#include<stdio.h> // preprocessive directive to include standard input and output header file
	long int multiplyNumbers(int n);
	int main() { // start of the main body
    	int n; // variable declaration
    	printf("Enter a positive integer: "); // printf function calling for positive integer
    	scanf("%d",&n); // scanf function calling for talking input of the numbers entered by the user
    	printf("Factorial of %d = %ld", n, multiplyNumbers(n));
    	return 0;
	}

	long int multiplyNumbers(int n) {
    	if (n>=1)
        	return n*multiplyNumbers(n-1);
    	else
        	return 1;
}
