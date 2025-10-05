#include <stdio.h>

int main()
{
    int num;
    printf("Enter any number : ");
    scanf("%d", &num);

    if (num == 0)
        printf("The value is equal to zero.\n");
    else if (num > 0)
        printf("The number is positive.\n");
    else
        printf("The number is negative.\n");
    return 0;
}