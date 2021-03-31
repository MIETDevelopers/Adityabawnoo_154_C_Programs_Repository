#include <stdio.h>  // Preprocessive directory for standard input and output
void displayNumbers(int num[2][2]);
int main() //start of the main body
{
    int num[2][2],i,j; // Array and variable declaration
    printf("Enter 4 numbers:\n"); //printf function calling for 4 numbers
    for (i = 0; i < 2; ++i) 
        for (j = 0; j < 2; ++j)
            scanf("%d", &num[i][j]);

    // passing multi-dimensional array to a function
    displayNumbers(num);
    return 0;
}

void displayNumbers(int num[2][2])
{
    printf("Displaying:\n");
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
           printf("%d\n", num[i][j]);
        }
    }
}
