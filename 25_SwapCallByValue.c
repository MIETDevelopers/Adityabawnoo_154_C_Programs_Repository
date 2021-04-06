//Author name : Aditya Bawnoo 
//Creation date : 20 March 2021
// Purpose : A C Program to swap two numbers using call by value.              
#include<stdio.h> // preprocessive directive to include standard input and output header file
void swap(int, int);
int main(){
    int a, b;
    printf("Enter two values: "); // printf function calling for two values
    scanf("%d %d", &a, &b);//Taking input from user.
    swap(a,b);
}
//Here swapping exists.
void swap (int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("%d %d", a, b);
}
