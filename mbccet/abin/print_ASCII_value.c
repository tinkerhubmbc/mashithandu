#include <stdio.h>

int main()
{
    char letter;

    printf("Enter a character :");
    scanf("%c", &letter);
    printf("ASCII value of %c is %d.", letter, letter);

    return 0;
}
