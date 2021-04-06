//Author name : Aditya Bawnoo 
//Creation date : 20 March 2021
// Purpose : C Program to sort an array in ascending order using Insertion Sort.          

#include <stdio.h> // preprocessive directive to include standard input and output header file
int main()
{ // start of the main body
    int n, i, j, temp; // variable declaration
    int arr[64]; // Array declaration
    printf("Enter number of elements\n"); // printf function calling for numbers
    scanf("%d", &n); // scanf function calling for taking input of the number entered by the user
 
    printf("Enter %d integers\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 1 ; i <= n - 1; i++) //Using for loop.
    {
	    j = i;
            while ( j > 0 && arr[j-1] > arr[j])
            {
            //Swap function will help for the purpose.       
                temp     = arr[j];
                arr[j]   = arr[j-1];
                arr[j-1] = temp;
                j--;
            }
    }
    //This will give the output.
    printf("Sorted list in ascending order:\n");
    for (i = 0; i <= n - 1; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
} //End
