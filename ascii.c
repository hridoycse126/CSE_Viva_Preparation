#include<stdio.h>
//ASCII (American Standard Code for Information and Interchange)
int main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    // %d displays the integer value of a character
    // %c displays the actual character
    printf("ASCII value of %c = %d\n", c, c);


}
