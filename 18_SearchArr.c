//Author name : Aditya Bawnoo 
//Creation date : 20 March 2021
// Purpose : A C Program representing linear Search
#include <stdio.h> // preprocessive directory to include standard input and output header file
int main(){  // start of the main body
  int a[50],size,i,val,flag=0;  // variable and array declaration

  printf("Enter Array elements\n"); // printf function calling for array elements
  for (i=0;i<size;i++)
    
    scanf("%d",&a[i]);
  printf("Enter value to search");
  scanf("%d",&val);
  
  for (i=0;i<size; i++)
  {
    if (a[i] == val)
    {
      printf(" location = %d",i);
      flag = 1;
    }
  }
  if ( flag == 0)
  {
    printf("Not found");
  }
  getch ();
}
