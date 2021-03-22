Created by : Aditya Bawnoo 
DATE: 17 March 2021
Purpose : Addition of two numbers
#include<stdio.h>
int main()
{
	int a,b,add,subt,mult;
	float divide;
	printf("Enter any two numbers");
	scanf("%d%d",&a,&b);
	add=a+b;
	subt=a-b;
	mult=a*b;
	divide=a/b;
	printf("\nAddition of the numbers =%d\n",add);
	printf("Subtraction of two numbers=%d\n",subt);
	printf("multiplication of the two numbers =%d\n",mult);
	printf("Divison of the two numbers =%f\n",divide);
	return 0;
}
	
