//Author name : Aditya Bawnoo 
//Creation date : 20 March 2021
// Purpose : Program for simple calculator using switch statement
#include<stdio.h> // preprocessive directive  to include standard input and output header file
int main(){ // start of the main body
    char operator; // variable declaration
    double a, b; // variable declaration
    printf("Enter an operator (+, -, *, /):"); // printf function calling for entering operator by the user.
    scanf("%c", &operator); //It will scan the operater entered by user.
    printf("Enter two operands:");
    scanf("%lf %lf",&a, &b); //It will scan the numbers entered by user.
    switch(operator) //Switch case is used to perfom the calculation case that is scanned (in line 6) based on user input.
    {
        case '+':
            printf("%.2lf + %.2lf = %.2lf",a, b, a+b); //Addition Function
            break;

        case '-':
            printf("%.2lf - %.2lf = %.2lf",a, b, a-b); //Subtraction Function
            break;

        case '*':
            printf("%.2lf * %.2lf = %.2lf",a, b, a*b); //Multiplication Function
            break;

        case '/':
            printf("%.2lf / %.2lf = %.2lf",a, b, a/b); //Division Function
            break;
    printf("Error encountered by the input values");  //Default
    }
    return 0;
}
