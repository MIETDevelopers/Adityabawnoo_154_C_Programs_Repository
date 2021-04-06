//Author name : Aditya Bawnoo
//Creation date : 22 March 2021
// Purpose : Program to check whether the entered number is Odd or Even.
#include <stdio.h> // preprocessive directive to include standard input and output
int main() { // start of the main body
    int num; // variable declaration
    printf("Enter an number: "); // printf function calling for number
    scanf("%d", &num); //scanf function calling for taking input of number entered by user.
    if(num % 2 == 0) 
        printf("%d is even.", num);
    else
        printf("%d is odd.", num);
    return 0;
}
