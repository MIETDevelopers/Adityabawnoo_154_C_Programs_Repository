//Author name : Aditya Bawnoo 
//Creation date : 20 March 2021
// Purpose : A C Program representing Binary Search
#include <stdio.h> // preprocessive directory to include standard input and output header file
int main(){  // start of the main body
  int c, first, last, middle, n, search, array[100]; // variable and array declaration

  printf("Enter number of elements\n"); // printf function calling for entering elements
  scanf("%d", &n);                      // scanf function calling for taking input of numbers entered by the user

  printf("Enter %d integers\n", n);  // printf function calling for entering integers

  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);

  printf("Enter value to find\n"); // printf function calling for enter the value to be find
  scanf("%d", &search);  // scanf function calling for taking input of the search value

  first = 0;
  last = n - 1;
  middle = (first+last)/2;

  while (first <= last) {
    if (array[middle] < search)
      first = middle + 1;
    else if (array[middle] == search) {
      printf("%d found at location %d.\n", search, middle+1);
      break;
    }
    else
      last = middle - 1;

    middle = (first + last)/2;
  }
  if (first > last)
    printf("Not found! %d isn't present in the list.\n", search);

  return 0;
}  // end of the main body
