//Author name : Aditya Bawnoo 
//Creation date : 20 March 2021
// Purpose : A C Program to find the largest number in a user entered array.

#include<stdio.h> // preprocessive directive to include standard input and output header file
int main(){ // start of the main body
	int i; // variable declaration
	float arr[5]; // variable declaration

	printf("Please enter five numbers:\n "); // printf function calling for numbers

	for (i = 0; i < 5; ++i) //Using for loop.
	{
    scanf("%f", &arr[i]);//Scanning the user entered values.
	}

		for (i = 1; i < 5; ++i)
		{
			//Determing the largest value.
    	if (arr[0] < arr[i])
        	arr[0] = arr[i];
		}
	printf("Largest element = %.2f", arr[0]);//Printing the largest value.

	return 0;
}
