//Author name : Aditya Bawnoo 
//Creation date : 20 March 2021
// Purpose :  C Program to print Fibonacci series using recursion
#include<stdio.h>    // preprocessive directive to include standard input and output header file
int main(){    // start of the main body
	int n1=0,n2=1,n3,i,number;    // variable declaration
	printf("Enter the number of elements: ");    // printf function calling for number of elements entered by the user
	scanf("%d",&number);    // scanf function calling for taking input of the number of elements entered by the user.
	printf(" %d %d",n1,n2);//Printing 0 and 1.   
	for(i=2;i<number;++i)//Loop starts from 2 because 0 and 1 are already printed.   
		{	//This will give output.
			n3=n1+n2;    
  			printf(" %d",n3);    
  			n1=n2;    
  			n2=n3;    
 		}  
	return 0;  
}
