#include <stdio.h> // Preprocessive directory for standard input and output


int main() {  // Start of the main body


  int r, c, a[100][100], b[100][100], sum[100][100], i, j; // variable and Array declaration

  printf("Enter the number of rows (between 1 and 100): "); // printf function calling for number of rows
  scanf("%d", &r);  // scanf function calling for taking input of rows

printf("Enter the number of columns (between 1 and 100): "); // printf function calling for number of columns
scanf("%d", &c); // scanf function calling for number of columns

  printf("\nEnter elements of 1st matrix:\n"); // printf function calling for matrix elements
  for (i = 0; i < r; ++i) // for loop for rows
    for (j = 0; j < c; ++j) { // for loop for columns
    
    
      printf("Enter element a %d%d: ", i + 1, j + 1);
      scanf("%d", &a[i][j]);
    }

  printf("Enter elements of 2nd matrix:\n"); // printf function calling for 2nd matrix elements
  for (i = 0; i < r; ++i) // for loop for rows
    for (j = 0; j < c; ++j) { // for loop for columns
      printf("Enter element b2%d%d: ", i + 1, j + 1);
      scanf("%d", &b[i][j]);
    }

  // adding two matrices
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      sum[i][j] = a[i][j] + b[i][j];
    }

  // printing the result
  printf("\nSum of two matrices: \n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("%d   ", sum[i][j]);
      if (j == c - 1) {
        printf("\n\n");
      }
    }

  return 0;
} // end of the main body
