#include <stdio.h>

int main()
{
    int a;

    printf("Enter a whole number: ");
    scanf("%d", &a);

    if (a % 2 == 0)
        printf("The number %d is an EVEN number.", a);
    else
        printf("The number %d is an ODD number.", a);
    return 0;
}