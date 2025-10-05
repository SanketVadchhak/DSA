#include <stdio.h>

int main()
{
    char ch;

    printf("Enter any character : ");
    scanf("%c", &ch);

    switch (ch) {
        case 'A':
        case 'a':
            printf("%c is VOWEL.\n", ch);
            break;
        case 'E':
        case 'e':
            printf("%c is VOWEL.\n", ch);
            break;
        case 'I':
        case 'i':
            printf("%c is VOWEL.\n", ch);
            break;
        case 'O':
        case 'o':
            printf("%c is VOWEL.\n", ch);
            break;
        case 'U':
        case 'u':
            printf("%c is VOWEL.\n", ch);
            break;
        default:
            printf("%c is not a vowel.\n", ch);
    }
    return 0;
}