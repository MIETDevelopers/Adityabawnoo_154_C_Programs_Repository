//Author name : Aditya Bawnoo 
//Creation date : 20 March 2021
// Purpose : Program to check odd or even
#include <stdio.h> // preprocessive directive to include standard input and output header file

int main() 
{ // start of the main body
    char ch;  // variable declaration

    /* Input character from user */
    printf("Enter any character: ");
    scanf("%c", &ch);


    /* Condition for vowel */
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || 
       ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        printf("'%c' is Vowel.", ch);
    }
    else if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        /* Condition for consonant */
        printf("'%c' is Consonant.", ch);
    }
    else 
    {
        /*
         * If it is neither vowel nor consonant
         * then it is not an alphabet.
 */
        printf("'%c' is not an alphabet.", ch);
    }

    return 0;
}
